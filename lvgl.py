# Ported the compress function from https://github.com/lvgl/lv_font_conv/blob/master/LICENSE

'''
https://github.com/lvgl/lv_font_conv/blob/master/LICENSE
Copyright (c) 2018 authors

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.'''


class bitstream():
    def __init__(self):
        self.bs = bytearray()
        self.b = 0x00
        self.offset = 0

    def clear(self):
        self.bs.clear()
        self.b = 0x00
        self.offset = 0

    def writebits(self, v, n):
        '''for i in reversed(range(n)):
            print((v >> i) & 0x01, end='')
        '''

        if n > 8:
            raise ValueError("N should be <= 8")

        v = v & ((1 << n)-1)

        if (self.offset + n) >= 8:
            #print('^b:{0},offset:{1},v:{2},n:{3}'.format(self.b, self.offset, v, n))
            self.bs.append((self.b << (8-self.offset)) | (v >> (self.offset + n - 8)) )

            self.offset = self.offset + n - 8
            if self.offset:
                self.b = v & ((1 << self.offset) - 1)
            else:
                self.b = 0x00
        else:
            #print(' b:{0},offset:{1},v:{2},n:{3}'.format(self.b, self.offset, v, n))
            self.b = (self.b << n) | v
            self.offset += n

    def get_result(self):
        if self.offset != 0:
            #print('$b:{0},offset{1}'.format(self.b,self.offset))
            self.bs.append(self.b << (8-self.offset))
            self.offset = 0
            self.b = 0x00
        
        return self.bs
    
def count_same(arr, offset):
    same = 1
    val = arr[offset]

    for idx in range(offset+1, len(arr)):
        if(arr[idx] != val):
            break
        same += 1

    return same

def prefilter(pixel_2d):
    for idy in range(1, len(pixel_2d)):
        for idx in range(len(pixel_2d[idy])):
            pixel_2d[idy][idx] ^= pixel_2d[idy-1][idx]

    return


def compress(bitstream, pixels, bpp):
    # Minimal repetitions count to enable RLE mode.
    RLE_SKIP_COUNT = 1
    # Number of repeats, when `1` used to replace data
    # If more - write as number
    RLE_BIT_COLLAPSED_COUNT = 10

    RLE_COUNTER_BITS = 6        # (2^bits - 1) - max value
    RLE_COUNTER_MAX = (1 << RLE_COUNTER_BITS) - 1
    # Force flush if counter dencity exceeded.
    RLE_MAX_REPEATS = RLE_COUNTER_MAX + RLE_BIT_COLLAPSED_COUNT + 1

    # let bits_start_offset = bitstream.index

    offset = 0

    while(offset < len(pixels)):
        p = pixels[offset]
        same = count_same(pixels, offset)

        # Clamp value because RLE counter density is limited
        if same > (RLE_MAX_REPEATS + RLE_SKIP_COUNT) :
            same = RLE_MAX_REPEATS + RLE_SKIP_COUNT

        #print('offset:{0}, same:{1}, p:{2}'.format(offset, same, hex(p)))
        offset += same

        # If not enough for RLE - write as is.
        if same <= RLE_SKIP_COUNT:
            for i in range(same):
                bitstream.writebits(p, bpp)

            continue
        
        # First, write "skipped" head as is.
        for i in range(RLE_SKIP_COUNT):
            bitstream.writebits(p, bpp)

        same -= RLE_SKIP_COUNT

        # Not reached state to use counter => dump bit-extended
        if same <= RLE_BIT_COLLAPSED_COUNT:
            bitstream.writebits(p, bpp)

            for i in range(same):
                # eslint-disable max-depth
                if i < (same - 1):
                    bitstream.writebits(1, 1)
                else:
                    bitstream.writebits(0, 1)

            continue
        
        same -= RLE_BIT_COLLAPSED_COUNT + 1

        bitstream.writebits(p, bpp)

        for i in range(0, RLE_BIT_COLLAPSED_COUNT+1):
            bitstream.writebits(1, 1)

        bitstream.writebits(same, RLE_COUNTER_BITS)


def test_compress():
    bs = bitstream()

    bs.clear()
    compress(bs, [1,2,3,2], 8)
    if (bs.get_result() != b'\x01\x02\x03\x02'):
        print('failed #1', bs.get_result())
        exit(1)
    

    bs.clear()
    compress(bs, [1,2,3,2], 4)
    if (bs.get_result() != b'\x12\x32'):
        print('failed #2', bs.get_result())
        exit(1)

    bs.clear()
    compress(bs, [0xFF, 0xF1, 0xFF], 3)
    if (bs.get_result() != b'\xE7\x80'):
        print('failed #3', bs.get_result())
        exit(1)

    bs.clear()
    compress(bs, [0x1, 0x3, 0x3, 0x3, 0x1], 4)
    if (bs.get_result() != b'\x13\x38\x40'):
        print('failed #4', bs.get_result())
        exit(1)

    bs.clear()
    pixels = [0 for i in range(15)]
    pixels[14] = 3
    compress(bs, pixels, 2)
    if (bs.get_result() != b'\x0F\xFE\x16'):
        print('failed #5', bs.get_result())
        exit(1)

    bs.clear()
    pixels = [0 for i in range(77)]
    pixels[76] = 3
    compress(bs, pixels, 2)
    if (bs.get_result() != b'\x0F\xFF\xF9\x80'):
        print('failed #6', bs.get_result())
        exit(1)

    print('test finished')

#####################################################

#test_compress()