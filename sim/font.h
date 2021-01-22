#ifndef _FONT_H_
#define _FONT_H_

#include <stdint.h>

#if (CONFIG_FONT_ENC == 0u)
    //Encoding method 0 (Raw Bitblt)
    typedef uint8_t *font_symbol_t;
#elif (CONFIG_FONT_ENC == 1u)
    //Encoding method 1 (RLE)
    typedef struct
    {
        uint16_t index;
        uint8_t size;
    }font_symbol_t;
#elif (CONFIG_FONT_ENC == 2u)
    //Encoding method 2 (Raw Bitblt) with margin
    typedef struct
    {
        uint8_t margin_top;
        uint8_t margin_bottom;
        uint8_t margin_left;
        uint8_t margin_right;
        uint16_t index;
        uint8_t size;
    }font_symbol_t;
#endif

typedef const font_symbol_t *(*fnt_lookup_fp)(char c);

typedef struct
{
    uint8_t width;
    uint8_t height;
    const uint8_t *bmp_base;
    fnt_lookup_fp lookup;
}font_t;

#endif
