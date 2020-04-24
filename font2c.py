'''  font2c.v
        Convert the font to C array format, output to LCD controller (e.g. ILI9806)
    
    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; either version 2
    of the License, or (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
    MA  02110-1301, US
    Copyright (C) 2018-2020 sfyip <yipxxx@gmail.com>
'''


#!/usr/bin/env python3

from tkinter import Tk, Canvas, Frame, BOTH, W
from PIL import Image, ImageDraw, ImageFont
from string import Template
import sys
import os

#=========================================================================================

ROWSIZE = 20

#=========================================================================================

#compress the steam, record continous '0' or '1'
def compress_lv1(steam):
    if not isinstance(steam, bytearray):
        Print("compress_lv1 parameter *steam* incorrect")
        return None
    
    result = []
    sample = 0
    count = 0
    
    for byte in (steam):
        for bitpos in range(8):
            bit = 1 if (byte & (1<<bitpos)) else 0
            
            if count == 256:
                result.append(0)    # '0' means 256
                count = 0
            elif (bit == sample):
                count += 1
            else:
                result.append(count)
                count = 1
                sample ^= 1;        #inverse the bit
    
    if(count != 0):
        result.append(count)    #push remaining byte
    
    return result

#=========================================================================================

class Margin():
    top = 0
    bottom = 0
    left = 0
    right = 0

#=========================================================================================

#Save the margin info to the steam
#compress the steam (inside margin area), record continous '0' or '1'
def compress_lv2(steam, margin):
    if not isinstance(margin, Margin):
        Print("compress_lv2 parameter *margin* incorrect")
        return None
    
    if not isinstance(steam, bytearray):
        Print("compress_lv2 parameter *steam* incorrect")
        return None

    result = [margin.top, margin.bottom, margin.left, margin.right]
    sample = 0
    count = 0
    
    for byte in (steam):
        for bitpos in range(8):
            bit = 1 if (byte & (1<<bitpos)) else 0
            
            if count == 256:
                result.append(0)    # '0' means 256
                count = 0
            elif (bit == sample):
                count += 1
            else:
                result.append(count)
                count = 1
                sample ^= 1;        #inverse the bit
    
    if(count != 0):
        result.append(count)    #push remaining byte
    
    return result

#=========================================================================================

special_char = {
    ' '   : 'sp',
    '!'   : 'excl',
    '"'   : 'quot',
    '#'   : 'num',
    '$'   : 'dollar',
    '%'   : 'percnt',
    '&'   : 'amp',
    '\''  : 'apos',
    '('   : 'lpar',
    ')'   : 'rpar',
    '*'   : 'ast',
    '+'   : 'plus',
    ','   : 'comma',
    '-'   : 'minus',
    '.'   : 'period',
    '/'   : 'sol',
    ':'   : 'colon',
    ';'   : 'semi',
    '<'   : 'lt',
    '='   : 'equals',
    '>'   : 'gt',
    '?'   : 'quest',
    '@'   : 'commat',
    '['   : 'lsqb',
    '\\'  : 'bsol',
    ']'   : 'rsqb',
    '^'   : 'circ',
    '_'   : 'lowbar',
    '`'   : 'grave',
    '{'   : 'lcub',
    '|'   : 'verbar',
    '}'   : 'rcub',
    '~'   : 'tilde'
}

def convert_special_char(c):
    if c in special_char:
        return special_char[c]
    elif c.isascii() and c.isprintable():
        return c;
    else:
        return str(ord(c))          # Unicode character ?

#=========================================================================================

def create_dir(directory):
    if not os.path.exists(directory):
        os.makedirs(directory)

#=========================================================================================

class FontPreviewFrame(Frame):
    font = "arial"                          # font style (Test chinese font: kaiu)
    size = 80                               # font size
    text = "0123456789:"                \
           "abcdefghijklmnopqrstuvwxyz" \
           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"     # "測試間距テスト"  # output whcih symbol
    offset = (0,0)                          # x,y offset
    fixed_width_height = None               # fixed width and height
    max_width = 83                          # maximum width
    compress_lv = 1                         # compress level (0=no compress, 1=compress, 2=chop margin and compress, not recommanded)
    template_file_path = "./template.txt"   # template file path
    export_dir = "./export/"                # export directory
    c_filename = font + str(size)           # generated c source file name
    
    def __init__(self):
        super().__init__()
        self.initUI()
    
    def initUI(self):
        fnt = ImageFont.truetype(font=self.font, size=self.size, index=0, encoding='')
        self.master.title(self.font)
        self.pack(fill=BOTH, expand=1)
        
        canvas = Canvas(self)
        canvas.create_text(5, 5, anchor="nw", font=(self.font, self.size), text=self.text)
        canvas.pack(fill=BOTH, expand=1)
        
    def export(self):
        create_dir(self.export_dir)
    
        fnt = ImageFont.truetype(font=self.font, size=self.size, index=0, encoding='')
        
        # Open the C file
        cfile = open(self.export_dir + '/' +self.c_filename + ".c", "w")
        
        # Open the template
        templatefile = open(self.template_file_path, "r")
        template = Template(templatefile.read())
        
        for c in self.text:
            fnt_size = fnt.getsize(c)
            print("Char: {0}".format(c));
            print("Actual font size: {0}".format(fnt_size));
            
            if(self.fixed_width_height != None):
                img_size = self.fixed_width_height
            else:
                img_size = (min(self.max_width, fnt_size[0]), max(self.size, fnt_size[1]))      # adaptive adjust the font size
            
            img = Image.new('1', img_size, 0)        # generate mono bmp, 0 = black color
            draw = ImageDraw.Draw(img)
            draw.text(self.offset, c, font=fnt, fill=1)  # 1= white color
            
            alias_c = convert_special_char(c)
            
            if c.islower():
                img.save(self.export_dir + '/' + self.font + str(self.size) + "_l" + alias_c + ".png")
            else:
                img.save(self.export_dir + '/' + self.font + str(self.size) +"_"+ alias_c + ".png")
            
            imgname = self.font + str(self.size) + "_" + alias_c
            imgdata = list(img.tobytes())
            
            # Print out image info
            print('Image name:   {0}'.format(imgname))
            print('Image size:   {0}'.format(img.size))
            
            margin = Margin()
            
            if (self.compress_lv == 2):
                #===========================================
                
                #calculate top margin
                for y in range(img_size[1]) :
                    accumulateBlank = 0
                    for x in range(img_size[0]):
                        if ((img.getpixel((x, y)) & 1) == 0):
                            accumulateBlank += 1
                        else:
                            break
                    
                    if(accumulateBlank == img_size[0]):
                        margin.top += 1
                    else:
                        break
                
                print("Top margin:", margin.top);
                
                #===========================================
                
                #calculate bottom margin
                for y in reversed(range(img_size[1])):
                    accumulateBlank = 0
                    for x in range(img_size[0]):
                        if ((img.getpixel((x, y)) & 1) == 0):
                            accumulateBlank += 1
                        else:
                            break
                    
                    if(accumulateBlank == img_size[0]):
                        margin.bottom += 1
                    else:
                        break
                
                print("Bottom margin:", margin.bottom);
                
                #===========================================
                
                #calculate left margin
                for x in range(img_size[0]):
                    accumulateBlank = 0
                    for y in range(img_size[1]):
                        if ((img.getpixel((x, y)) & 1) == 0):
                            accumulateBlank += 1
                        else:
                            break
                    
                    if(accumulateBlank == img_size[1]):
                        margin.left += 1
                    else:
                        break
                
                print("Left margin:", margin.left);
                
                #===========================================
                
                #calculate right margin
                for x in reversed(range(img_size[0])):
                    accumulateBlank = 0
                    for y in range(img_size[1]):
                        if ((img.getpixel((x, y)) & 1) == 0):
                            accumulateBlank += 1
                        else:
                            break
                    
                    if(accumulateBlank == img_size[1]):
                        margin.right += 1
                    else:
                        break
                
                print("Right margin:", margin.right);
                    
            #===========================================
            
            byte = 0x00
            count = 0
            steam = bytearray()
            
            # Scan from left to right,  down to bottom sequentially
            for y in range(margin.top, img_size[1]-margin.bottom):
                for x in range(margin.left, img_size[0]-margin.right):      
                    if (img.getpixel((x, y)) & 1):
                        byte |= (1 << count)
                    
                    if (count == 7):
                        steam.append(byte)
                        count = 0
                        byte = 0x00
                    else:
                        count += 1
            
            if (count != 0):
                steam.append(byte)  # push remaining byte
            
            #===========================================
            
            if (self.compress_lv == 0):    # compress the data?
                pass
            elif (self.compress_lv == 1):
                steam = compress_lv1(steam)
            elif (self.compress_lv == 2):
                steam = compress_lv2(steam, margin)
            else:
                print("unsupport compress level\n")
                cfile.close()
                return
            
            #===========================================
            
            # Build the template parameter list
            data = {}
            
            data['imgname'] = imgname
            data['imgnamecaps'] = imgname.upper()
            data['compresslv'] = self.compress_lv
            data['width'] = img.size[0]
            data['height'] = img.size[1]
            data['imglen'] = len(steam)
            data['imgdata'] = ',\n    '.join([', '.join(['0x{:02X}'.format((x)) for x in steam[y : y + ROWSIZE]]) for y in range(0, len(steam), ROWSIZE)])
            
            cfile.write(template.substitute(data))
            
            print("------------------------------------------")
  
        cfile.close()

#=========================================================================================

root = Tk()
ex = FontPreviewFrame()
ex.export()
root.geometry("800x600")
root.mainloop()
