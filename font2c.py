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

try:
    from tkinter import Label, Tk
except:
    from tkinter import Label, Tk

from PIL import Image, ImageDraw, ImageFont, ImageTk
from string import Template
import sys
import os
import textwrap

#=========================================================================================

class font_config():
    font = "cour"                           # font style (Test chinese font: kaiu)
    size = 24                               # font size
    text = "0123456789:"                \
           "abcdefghijklmnopqrstuvwxyz" \
           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"     # "測試間距テスト"  # output which symbol
    offset = (0,0)                          # x,y offset
    fixed_width_height = (14,24)            # fixed width and height
    max_width = 24                          # maximum width
    encoding_method = 0                     # encoding method
                                            # 0=direct dump the pixels
                                            # 1=accumulate numbers of 0 and 1
                                            # 2=direct dump the pixels inside the margin area
                                            # 3=accumulate numbers of 0 and 1 inside the margin area
    template_file_path = "./template.txt"   # template file path
    export_dir = "./export/"                # export directory
    c_filename = font + str(size)           # generated c source file name

#=========================================================================================

class Margin():
    top = 0
    bottom = 0
    left = 0
    right = 0

#=========================================================================================

#Encoding method 1: Accumulate numbers of '0' and '1'
def encoding_method_1(steam):
    if not isinstance(steam, bytearray):
        Print("encoding_method_1 parameter *steam* incorrect")
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

#Encoding method 2:
#direct dump the pixels inside the margin area
def encoding_method_2(steam, margin):
    if not isinstance(margin, Margin):
        Print("encoding_method_2 parameter *margin* incorrect")
        return None
    
    if not isinstance(steam, bytearray):
        Print("encoding_method_2 parameter *steam* incorrect")
        return None

    result = [margin.top, margin.bottom, margin.left, margin.right]
    
    for byte in (steam):
        result.append(byte)
    
    return result

#=========================================================================================

#Encoding method 3:
#Save the margin to the steam first, accumulate numbers of '0' and '1' inside the margin area
def encoding_method_3(steam, margin):
    if not isinstance(margin, Margin):
        Print("encoding_method_3 parameter *margin* incorrect")
        return None
    
    if not isinstance(steam, bytearray):
        Print("encoding_method_3 parameter *steam* incorrect")
        return None

    result = [margin.top, margin.bottom, margin.left, margin.right]
    sample = 0
    count = 0
    
    if(steam[0] & 0x01):    # if the first pixel is white color, push 0x01 to steam as indicator
        result.append(0x01)
        sample = 1
    
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
                sample ^= 1         #inverse the bit
    
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

def truetype_font(font_path, size):
    return ImageFont.truetype(font_path, size)

#=========================================================================================

class ttf_label(Label):
    def __init__(self, master, text, width, foreground="black", truetype_font=None, font_path=None, family=None, size=None, **kwargs):   
        if truetype_font is None:
            if font_path is None:
                raise ValueError("Font path can't be None")
                
            # Initialize font
            truetype_font = ImageFont.truetype(font_path, size)
        
        lines = textwrap.wrap(text, width=width)
        
        width = 0
        height = 0
        
        line_heights = []
        for line in lines:
            line_width, line_height = truetype_font.getsize(line)
            line_heights.append(line_height)
            
            width = max(width, line_width)
            height += line_height

        image = Image.new("RGBA", (width, height), color=(0,0,0,0))
        draw = ImageDraw.Draw(image)

        y_text = 0
        for i, line in enumerate(lines):
            draw.text((0, y_text), line, font=truetype_font, fill=foreground)
            y_text += line_heights[i]

        self._photoimage = ImageTk.PhotoImage(image)
        Label.__init__(self, master, image=self._photoimage, **kwargs)

#=========================================================================================

class font2c():
    conf = None
    rowsize = 20
    
    def __init__(self, conf):
        if(isinstance(conf, font_config)):
            self.conf = conf
        else:
            raise TypeError("Only font_config type is allowed")
    
    def preview(self):
        ttf_label(root, text=self.conf.text, width=200, font_path=self.conf.font, size=self.conf.size).pack(pady=(30,0))

    def export(self):
        create_dir(self.conf.export_dir)
        
        fnt = ImageFont.truetype(font=self.conf.font, size=self.conf.size, index=0, encoding='')
        
        # Open the C file
        cfile = open(self.conf.export_dir + '/' +self.conf.c_filename + ".c", "w")
        
        # Open the template
        templatefile = open(self.conf.template_file_path, "r")
        template = Template(templatefile.read())
        
        for c in self.conf.text:
            fnt_size = fnt.getsize(c)
            print("Char: {0}".format(c));
            print("Actual font size: {0}".format(fnt_size));
            
            if(self.conf.fixed_width_height != None):
                img_size = self.conf.fixed_width_height
            else:
                img_size = (min(self.conf.max_width, fnt_size[0]), max(self.conf.size, fnt_size[1]))      # adaptive adjust the font size
            
            img = Image.new('1', img_size, 0)        # generate mono bmp, 0 = black color
            draw = ImageDraw.Draw(img)
            draw.text(self.conf.offset, c, font=fnt, fill=1)  # 1= white color
            
            alias_c = convert_special_char(c)
            
            if c.islower():
                img.save(self.conf.export_dir + '/' + self.conf.font + str(self.conf.size) + "_l" + alias_c + ".png")
            else:
                img.save(self.conf.export_dir + '/' + self.conf.font + str(self.conf.size) +"_"+ alias_c + ".png")
            
            imgname = self.conf.font + str(self.conf.size) + "_" + alias_c
            imgdata = list(img.tobytes())
            
            # Print out image info
            print('Image name:   {0}'.format(imgname))
            print('Image size:   {0}'.format(img.size))
            
            margin = Margin()
            
            if (self.conf.encoding_method == 2 or self.conf.encoding_method == 3):
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
            
            if (self.conf.encoding_method == 0):
                pass
            elif (self.conf.encoding_method == 1):
                steam = encoding_method_1(steam)
            elif (self.conf.encoding_method == 2):
                steam = encoding_method_2(steam, margin)
            elif (self.conf.encoding_method == 3):
                steam = encoding_method_3(steam, margin)
            else:
                print("Unsupport encoding method\n")
                cfile.close()
                return
            
            #===========================================
            
            # Build the template parameter list
            data = {}
            
            data['imgname'] = imgname
            data['imgnamecaps'] = imgname.upper()
            data['encoding_method'] = self.conf.encoding_method
            data['width'] = img.size[0]
            data['height'] = img.size[1]
            data['imglen'] = len(steam)
            data['imgdata'] = ',\n    '.join([', '.join(['0x{:02X}'.format((x)) for x in steam[y : y + self.rowsize]]) for y in range(0, len(steam), self.rowsize)])
            
            cfile.write(template.substitute(data))
            
            print("------------------------------------------")
  
        cfile.close()

#=========================================================================================

root = Tk()

f_config = font_config()
f2c = font2c(f_config)
f2c.export()
f2c.preview()
w, h = root.winfo_screenwidth()/2, root.winfo_screenheight()/2
root.title("Font Preview")
root.geometry("%dx%d" % (w, h))
root.mainloop()
