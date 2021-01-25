#ifndef _FONT_H_
#define _FONT_H_

#include <stdint.h>
#include <stdbool.h>

// define the maximum size of margin top, margin bottom, margin left, margin width
#define FONT_MARGIN_DATABIT_SIZE        4

//=================================================================

typedef struct
{
#if (CONFIG_FONT_FIXED_WIDTH_HEIGHT == 0u)
    // adapt size
    uint8_t width;
    uint8_t height;
#endif

#if (CONFIG_FONT_MARGIN > 0u)
    // calc_margin
    uint8_t margin_top      :FONT_MARGIN_DATABIT_SIZE;
    uint8_t margin_bottom   :FONT_MARGIN_DATABIT_SIZE;
    uint8_t margin_left     :FONT_MARGIN_DATABIT_SIZE;
    uint8_t margin_right    :FONT_MARGIN_DATABIT_SIZE;
#endif

    uint16_t index;

#if ((CONFIG_FONT_ENC==0u && CONFIG_FONT_FIXED_WIDTH_HEIGH==0u) || CONFIG_FONT_ENC == 1u)
    uint8_t size;
#endif
}font_symbol_t;

//=================================================================

typedef bool (*fnt_lookup_fp)(char c, font_symbol_t *sym);

#if (CONFIG_FONT_FIXED_WIDTH_HEIGHT > 0u) 
    typedef struct
    {
        uint8_t width;
        uint8_t height;
        const uint8_t *bmp_base;
        fnt_lookup_fp lookup;
    }font_t;
#else
    typedef struct
    {
        uint8_t default_width;
        uint8_t default_height;
        const uint8_t *bmp_base;
        fnt_lookup_fp lookup;
    }font_t;
#endif

//=================================================================

#endif
