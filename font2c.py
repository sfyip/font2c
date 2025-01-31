# coding=utf-8
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

import sys
import os
import argparse
from PIL import Image, ImageDraw, ImageFont
from string import Template


try:
    import configparser as configparser
except:
    import ConfigParser as configparser

import lvgl

#=========================================================================================

def create_dir(directory):
    if not os.path.exists(directory):
        os.makedirs(directory)

#=========================================================================================

def extract_filename(path):
    return os.path.splitext(os.path.basename(path))[0]

#=========================================================================================

class font_config():
    bpp  = 1                                            # 1-bpp
    font = '/usr/share/fonts/truetype/freefont/FreeMono.ttf'    # font style (Test chinese font: kaiu) (ubuntu 18.04: /usr/share/fonts/truetype/freefont/FreeMono.ttf)
    size = 24                                           # font size
    text = '0123456789:'                \
           'abcdefghijklmnopqrstuvwxyz' \
           'ABCDEFGHIJKLMNOPQRSTUVWXYZ'                 # '測試間距テスト'  # output which symbol
    offset = (0, 0)                                     # x,y offset
    fixed_width_height = (14, 24)                       # fixed width and height
    max_width = 24                                      # maximum width
    encoding_method = 'raw'                             # encoding method (raw|rawbb|lvgl)
                                                        # raw: direct dump the pixels inside the margin area
                                                        # rawbb: direct dump the pixel inside margin area (bounding box)
                                                        # lvgl: use lvgl font compression (modified i3bn)
    export_dir = './export/'                            # export directory
    c_filename = f'{extract_filename(font)}{size}'.lower()     # generated c source file name

def load_config(config_file_path):
    cfg = configparser.ConfigParser()
    dataset = cfg.read(config_file_path, encoding='utf-8')

    if dataset == []:
        print("Failed to open config file: ", config_file_path)
        exit(1)

    font_list = []

    for section in cfg.sections():
        print("Section: %s" % section)

        c = font_config()
        c.c_filename = section
        c.bpp = cfg.getint(section, 'bpp')
        c.font = cfg.get(section, 'font')
        c.size = cfg.getint(section, 'size')
        c.text = ''.join(sorted(set(cfg.get(section, 'text'))))     # sort the characters
        #c.text = cfg.get(section, 'text')
        c.offset = eval(cfg.get(section, 'offset'), {}, {})
        c.fixed_width_height = eval(cfg.get(section, 'fixed_width_height'), {}, {})
        c.max_width = cfg.getint(section, 'max_width')
        c.encoding_method = cfg.get(section, 'encoding_method')
        c.export_dir = cfg.get(section, 'export_dir')
        
        font_list.append(c)

    return font_list

def get_template(conf):
    tempate_file = ('fixedsize' if conf.fixed_width_height else 'varsize') + '_' + conf.encoding_method +'.tpl'
    return tempate_file

class template():
    def __init__(self):
        self.header = ''
        self.loopbody = ''
        self.footer = ''

def load_template(template_file_path):
    tpl_list = []

    with open(template_file_path) as tf:
        s = tf.read()
        section_str = s.split('####split####\n')   #special keyword to split each section

        for section_str in section_str:
            subset_str = section_str.split('====split====\n')   #special keyword to split header, loopbody and footer
            subset_len = len(subset_str)

            tpl = template()

            if subset_len <= 1:
                tpl.header = subset_str[0]
            elif subset_len == 2:
                tpl.header = subset_str[0]
                tpl.loopbody = subset_str[1]
            elif subset_len == 3:
                tpl.header = subset_str[0]
                tpl.loopbody = subset_str[1]
                tpl.footer = subset_str[2]
            else:
                raise ValueError("Template format is not correct")

            tpl_list.append(tpl)

    return tpl_list


def show_help():
    print("font2c.py by yipxxx@gmail.com")
    print("------------------------------------------------------")
    print("Usage:")
    print("Load the setting from config file: python3 font2c.py config.ini")
    print("Use default setting: python3 font2c.py")

#=========================================================================================

class Margin():
    def __init__(self):
        self.top = 0
        self.bottom = 0
        self.left = 0
        self.right = 0

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

def is_ascii(c):
    return ord(c) < 128

def is_unicode(c):
    if c in special_char:
        return False
    elif is_ascii(c) and c.isprintable():
        return False
    else:
        return True

def convert_special_char(c):
    if c in special_char:
        return special_char[c]
    elif is_ascii(c) and c.isprintable():   # c.isascii() only supports > python 3.7
        return c
    else:
        return f'{c}_{hex(ord(c))}'   # Unicode character ?

#=========================================================================================

class font2c():
    ROWSIZE = 20

    def __init__(self, conf):
        if(isinstance(conf, font_config)):
            self.conf = conf
        else:
            raise TypeError("Only font_config type is allowed")
    
    def _img_init(self, img_size):
        if(self.conf.bpp == 1):
            return Image.new('1', img_size, 0)      # generate mono bmp, 0 = black color
        elif (self.conf.bpp == 2 or self.conf.bpp == 4):
            return Image.new('L', img_size, 0)      # generate 8-bit bmp
        else:
            raise TypeError("bpp only accept 1, 2 or 4")
    
    def _img_is_pixel_blank(self, img, xy):
        if(self.conf.bpp == 1):
            return (img.getpixel(xy) & 1) == 0
        elif (self.conf.bpp == 2 or self.conf.bpp == 4):
            return (img.getpixel(xy) & 0xC0) == 0
        else:
            raise TypeError("bpp only accept 1, 2 or 4")
    
    def _img_push_pixel_to_steam(self, img, xy):
        if(self.conf.bpp == 1):
            return img.getpixel(xy) & 1
        elif (self.conf.bpp == 2):
            return img.getpixel(xy) >> 6
        elif (self.conf.bpp == 4):
            return img.getpixel(xy) >> 4
        else:
            raise TypeError("bpp only accept 1, 2 or 4")

    def _img_calc_margin(self, img, img_size):
        margin = Margin()

        #calculate top margin
        for y in range(img_size[1]):
            accumulate_blank = 0
            for x in range(img_size[0]):
                if (self._img_is_pixel_blank(img, (x, y))):
                    accumulate_blank += 1
                else:
                    break
            if(accumulate_blank == img_size[0]):
                margin.top += 1
            else:
                break

        #calculate bottom margin
        for y in reversed(range(img_size[1])):
            accumulate_blank = 0
            for x in range(img_size[0]):
                if (self._img_is_pixel_blank(img, (x, y))):
                    accumulate_blank += 1
                else:
                    break

            if(accumulate_blank == img_size[0]):
                margin.bottom += 1
            else:
                break

        #calculate left margin
        for x in range(img_size[0]):
            accumulate_blank = 0
            for y in range(img_size[1]):
                if (self._img_is_pixel_blank(img, (x, y))):
                    accumulate_blank += 1
                else:
                    break

            if(accumulate_blank == img_size[1]):
                margin.left += 1
            else:
                break

        #calculate right margin
        for x in reversed(range(img_size[0])):
            accumulate_blank = 0
            for y in range(img_size[1]):
                if (self._img_is_pixel_blank(img, (x, y))):
                    accumulate_blank += 1
                else:
                    break
            if(accumulate_blank == img_size[1]):
                margin.right += 1
            else:
                break

        return margin

    def preview(self):
        fnt = None

        try:
            fnt = ImageFont.truetype(self.conf.font, self.conf.size)
        except IOError:
            print('Cannot open the font: ' + self.conf.font)
            exit(1)

        DISPLAY_COLUMN_CHAR = 20
        DISPLAY_ROW_CLEARANCE = 5

        # Reserve big enough image size
        #FIXED: fnt.getsize() is not support anymore starting from v10.0
        _, _, right, bottom = fnt.getbbox('X')
        width = right * DISPLAY_COLUMN_CHAR * 2
        height = int(( (len(self.conf.text) / DISPLAY_COLUMN_CHAR) + 1 ) * (bottom + DISPLAY_ROW_CLEARANCE)) * 2
        image = Image.new("RGB", (width, height), color=(0, 0, 0))
        draw = ImageDraw.Draw(image)

        x = 0
        y = 0
        max_height = 0
        for idx, c in enumerate(self.conf.text):
            if self.conf.fixed_width_height != None:
                width, height = self.conf.fixed_width_height
            else:
                #fnt_size = fnt.getsize(c)

                #FIXED: fnt.getsize() is not support anymore starting from v10.0
                _, _, right, bottom = fnt.getbbox(c)
                width = right
                height = bottom
                width, height = (min(self.conf.max_width, width), height)

            max_height = max(max_height, height)

            # Draw bounding rectangle without offset
            xy0 = (x, y)
            xy1 = (x + width, y + height)
            draw.rectangle([xy0, xy1], fill=(0, 0, 0), outline=(120, 120, 120), width=1)

            # Draw tet
            xy0 = (x + self.conf.offset[0], y + self.conf.offset[1])
            xy1 = (x + self.conf.offset[0] + width, y + self.conf.offset[1] + height)
            draw.text(xy0, c, font=fnt, fill=(255, 153, 0))

            if ((idx + 1) % DISPLAY_COLUMN_CHAR) == 0:
                x = 0
                y += (max_height + DISPLAY_ROW_CLEARANCE)
                max_height = 0
            else:
                x += width

        image.show()

    def encoding_method_raw(self, img, x0, y0, x1, y1):
        # Scan from left to right,  down to bottom sequentially
        byte = 0x00
        count = 0
        bs = bytearray()

        for y in range(y0, y1):
            for x in range(x0, x1):
                pixel = self._img_push_pixel_to_steam(img, (x, y))

                byte |= (pixel << count)
                count += self.conf.bpp
                if (count == 8):
                    bs.append(byte)
                    count = 0
                    byte = 0x00
                elif (count > 8):
                    raise OverflowError("The bit count should be <= 8")

        if (count != 0):
            bs.append(byte)  # push remaining byte

        return bs

    def encoding_method_lvgl(self, img, x0, y0, x1, y1):
        bs = lvgl.bitstream()

        pixel_2d = []
        for y in range(y0, y1):
            x_line = []
            for x in range(x0, x1):
                pixel = self._img_push_pixel_to_steam(img, (x, y))
                x_line.append(pixel)
            pixel_2d.append(x_line)

        #lvgl.prefilter(pixel_2d)

        pixel_list = sum(pixel_2d, [])

        lvgl.compress(bs, pixel_list, self.conf.bpp)

        return bs.get_result()

    def export(self):
        create_dir(self.conf.export_dir)
        create_dir(os.path.join(self.conf.export_dir, 'img'))

        try:
            fnt = ImageFont.truetype(font=self.conf.font, size=self.conf.size, index=0, encoding='')
        except IOError:
            print('Cannot open the font: ' + self.conf.font)
            exit(1)

        # Open the C file
        filename = os.path.join(self.conf.export_dir, f'{self.conf.c_filename}.c')
        with open(filename, "w", encoding='utf8') as cfile:

            # Open the template
            template_list = None

            template_file_path = get_template(self.conf)
            print(f'Load template file:{template_file_path}')
            try:
                template_filename = os.path.join('template', template_file_path)
                template_list = load_template(template_filename)
            except IOError:
                print(f'Cannot open template file: {template_file_path}')
                exit(1)

            for template in template_list:
                # Build the template parameter list
                template_key = {}
                utf8_map = [hex(ord(c)) for c in self.conf.text if is_unicode(c)]

                template_key['bpp'] = self.conf.bpp
                template_key['font'] = extract_filename(self.conf.font).replace('-', '_')   # replace - keyword to _
                template_key['font_lowercase'] = template_key['font'].lower()
                template_key['font_uppercase'] = template_key['font'].upper()
                template_key['size'] = self.conf.size
                template_key['encoding_method'] = self.conf.encoding_method
                template_key['template_file_path'] = template_file_path

                _, _, right, bottom = fnt.getbbox(' ')
                template_key['space_width'] = right
                template_key['space_height'] = bottom
                template_key['utf8_map'] = ', '.join(utf8_map)
                template_key['enable_utf8'] = '1' if len(utf8_map) > 0 else '0'

                if self.conf.fixed_width_height is None:
                    (template_key['width'], template_key['height']) = ('varsize', 'varsize')
                else:
                    (template_key['width'], template_key['height']) = self.conf.fixed_width_height

                # If encoding methid is raw and fixed_width_length != None, bmplen can be pre-estimated
                if self.conf.encoding_method.lower() == 'raw' and self.conf.fixed_width_height != None:
                    pixel_size = self.conf.fixed_width_height[0] * self.conf.fixed_width_height[1]
                    template_key['sizeof_char'] = ( int(pixel_size / 8) + (1 if (pixel_size % 8) else 0 ) ) * self.conf.bpp
                else:
                    template_key['sizeof_char'] = 'Unknown'

                template_key['bmpidx'] = 0

                cfile.write(Template(template.header).substitute(template_key))

                for c in self.conf.text:
                    #fnt_size = fnt.getsize(c)

                    #FIXED: fnt.getsize(c) does not support anymore in PIL since v10.0
                    _, _, right, bottom = fnt.getbbox(c)
                    fnt_size = (right, bottom)

                    print("Char: {0}".format(c))
                    print("Actual font size: {0}".format(fnt_size))

                    if(self.conf.fixed_width_height != None):
                        img_size = self.conf.fixed_width_height
                    else:
                        img_size = (min(self.conf.max_width, fnt_size[0]), fnt_size[1])      # adaptive adjust the font size


                    img = self._img_init(img_size)

                    draw = ImageDraw.Draw(img)

                    if(self.conf.bpp == 1):
                        textcolor = 1
                    elif(self.conf.bpp == 2 or self.conf.bpp == 4):
                        textcolor = 255
                    else:
                        raise TypeError("bpp only accept 1, 2 or 4")

                    draw.text(self.conf.offset, c, font=fnt, fill=textcolor)  # 1= white color

                    alias_c = convert_special_char(c)

                    font_name = extract_filename(self.conf.font) + str(self.conf.size)

                    img.save(self.conf.export_dir + '/img/' + font_name + ('_l' if c.islower() else '_') + alias_c + '.png')

                    imgname = font_name + '_' + alias_c

                    # Print out image info
                    print('Image name:   {0}'.format(imgname))
                    print('Image size:   {0}'.format(img.size))

                    margin = Margin()

                    if self.conf.encoding_method == 'rawbb' or self.conf.encoding_method == 'lvgl':
                        #===========================================
                        margin = self._img_calc_margin(img, img_size)
                        print("Top margin:", margin.top)
                        print("Bottom margin:", margin.bottom)
                        print("Left margin:", margin.left)
                        print("Right margin:", margin.right)
                        #===========================================

                    y0 = margin.top
                    y1 = img_size[1]-margin.bottom
                    x0 = margin.left
                    x1 = img_size[0]-margin.right

                    bmpsteam = None

                    if (self.conf.encoding_method.lower() == 'raw' or self.conf.encoding_method.lower() == 'rawbb'):
                        bmpsteam = self.encoding_method_raw(img, x0, y0, x1, y1)
                    elif self.conf.encoding_method.lower() == 'lvgl':
                        bmpsteam = self.encoding_method_lvgl(img, x0, y0, x1, y1)
                    else:
                        raise TypeError("Unsupport encoding method. Only support raw, rawbb or lvgl")

                    #===========================================

                    # Build the template parameter list
                    template_key['charname'] = imgname
                    template_key['charname_lowercase'] = imgname.lower()
                    template_key['charname_uppercase'] = imgname.upper()
                    template_key['codepoint'] = str(hex(ord(c)))
                    template_key['margin_top'] = margin.top
                    template_key['margin_bottom'] = margin.bottom
                    template_key['margin_left'] = margin.left
                    template_key['margin_right'] = margin.right
                    template_key['width'] = img.size[0]
                    template_key['height'] = img.size[1]
                    template_key['sizeof_char'] = len(bmpsteam)
                    template_key['bmpdata'] = ',\n    '.join([', '.join(['0x{:02X}'.format((x)) for x in bmpsteam[y : y + self.ROWSIZE]]) for y in range(0, len(bmpsteam), self.ROWSIZE)])

                    cfile.write(Template(template.loopbody).substitute(template_key))

                    template_key['bmpidx'] += len(bmpsteam)
                    print("------------------------------------------")

                cfile.write(Template(template.footer).substitute(template_key))

#=========================================================================================

if __name__ == "__main__":
    if sys.version_info[0] < 3:
        raise Exception("Run on Python 3 only")

    argv_len = len(sys.argv)

    if(argv_len == 1):
        config = font_config()
        f2c = font2c(config)
        f2c.export()
        f2c.preview()

    elif(argv_len == 2):
        print("Load from config file: ", sys.argv[1])
        font_config_list = load_config(sys.argv[1])

        for config in font_config_list:
            f2c = font2c(config)
            f2c.export()
            f2c.preview()
    else:
        show_help()
