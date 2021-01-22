#ifndef _FONT_H_
#define _FONT_H_

#if 1
    //Encoding method 0 (Raw Bitblt)
    typedef const uint8_t *font_bmp_t;
#else
    //Encoding method 1 (RLE)
    typedef struct
    {
        uint16_t size;
        const uint8_t *bmp;
    }font_bmp_t;
#endif

typedef const font_bmp_t *(*fnt_lookup_fp)(char c);

typedef struct
{
    uint8_t width;
    uint8_t height;
    fnt_lookup_fp lookup;
}font_t;

#endif
