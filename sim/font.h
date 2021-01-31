#ifndef _FONT_H_
#define _FONT_H_

#include <stdint.h>
#include <stdbool.h>
#include "utf8.h"

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

#if (CONFIG_FONT_ENC >= 1u && CONFIG_FONT_ENC <= 3u)
    // calc_margin
    uint8_t margin_top      :FONT_MARGIN_DATABIT_SIZE;
    uint8_t margin_bottom   :FONT_MARGIN_DATABIT_SIZE;
    uint8_t margin_left     :FONT_MARGIN_DATABIT_SIZE;
    uint8_t margin_right    :FONT_MARGIN_DATABIT_SIZE;
#endif

    uint16_t bmp_index;

#if (CONFIG_FONT_ENC >= 2u && CONFIG_FONT_ENC <= 3u)
    uint8_t size;
#endif
}font_symbol_t;

//=================================================================


typedef bool (*fnt_lookup_fp)(utf8_t c, font_symbol_t *sym);

typedef struct
{
#if (CONFIG_FONT_FIXED_WIDTH_HEIGHT > 0u) 
    uint8_t width;
    uint8_t height;
#else
    uint8_t default_width;
    uint8_t default_height;
#endif

    const uint8_t *bmp_base;

    fnt_lookup_fp lookup;
}font_t;

//=================================================================

#endif
