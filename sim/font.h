#ifndef _FONT_H_
#define _FONT_H_

#include <stdint.h>
#include <stdbool.h>

// define the maximum size of margin top, margin bottom, margin left, margin width
#define FONT_MARGIN_DATABIT_SIZE        4


#if (CONFIG_FONT_FIXED_WIDTH_HEIGHT > 0u) 
    // Fixed width and height
    #if (CONFIG_FONT_ENC == 0u)
        //Encoding method 0 (Raw Bitblt)
        typedef struct
        {
            uint16_t index;
        }font_symbol_t;
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
            uint8_t margin_top      :FONT_MARGIN_DATABIT_SIZE;
            uint8_t margin_bottom   :FONT_MARGIN_DATABIT_SIZE;
            uint8_t margin_left     :FONT_MARGIN_DATABIT_SIZE;
            uint8_t margin_right    :FONT_MARGIN_DATABIT_SIZE;
            uint16_t index;
            uint8_t size;
        }font_symbol_t;
    #elif (CONFIG_FONT_ENC == 3u)
        //Encoding method 3 (RLE) with margin
        typedef struct
        {
            uint8_t margin_top      :FONT_MARGIN_DATABIT_SIZE;
            uint8_t margin_bottom   :FONT_MARGIN_DATABIT_SIZE;
            uint8_t margin_left     :FONT_MARGIN_DATABIT_SIZE;
            uint8_t margin_right    :FONT_MARGIN_DATABIT_SIZE;
            uint16_t index;
            uint8_t size;
        }font_symbol_t;
    #endif

    typedef bool (*fnt_lookup_fp)(char c, font_symbol_t *sym);

    typedef struct
    {
        uint8_t width;
        uint8_t height;
        const uint8_t *bmp_base;
        fnt_lookup_fp lookup;
    }font_t;
#else
    // width and height are adaptive
    #if (CONFIG_FONT_ENC == 0u)
        #error ("Not test yet")
        //Encoding method 0 (Raw Bitblt)
        typedef struct {
            uint8_t width;
            uint8_t height;
            uint8_t *bmp
        }font_symbol_t;
    #elif (CONFIG_FONT_ENC == 1u)
        #error ("Not test yet")
        //Encoding method 1 (RLE)
        typedef struct
        {
            uint8_t width;
            uint8_t height;
            uint16_t index;
            uint8_t size;
        }font_symbol_t;
    #elif (CONFIG_FONT_ENC == 2u)
        //Encoding method 2 (Raw Bitblt) with margin
        typedef struct
        {
            uint8_t width;
            uint8_t height;
            uint8_t margin_top      :FONT_MARGIN_DATABIT_SIZE;
            uint8_t margin_bottom   :FONT_MARGIN_DATABIT_SIZE;
            uint8_t margin_left     :FONT_MARGIN_DATABIT_SIZE;
            uint8_t margin_right    :FONT_MARGIN_DATABIT_SIZE;
            uint16_t index;
            uint8_t size;
        }font_symbol_t;
    #elif (CONFIG_FONT_ENC == 3u)
        #error ("Not test yet")
        //Encoding method 3 (RLE) with margin
        typedef struct
        {
            uint8_t width;
            uint8_t height;
            uint8_t margin_top      :FONT_MARGIN_DATABIT_SIZE;
            uint8_t margin_bottom   :FONT_MARGIN_DATABIT_SIZE;
            uint8_t margin_left     :FONT_MARGIN_DATABIT_SIZE;
            uint8_t margin_right    :FONT_MARGIN_DATABIT_SIZE;
            uint16_t index;
            uint8_t size;
        }font_symbol_t;
    #endif

    typedef bool (*fnt_lookup_fp)(char c, font_symbol_t *sym);

    typedef struct
    {
        uint8_t default_width;
        uint8_t default_height;
        const uint8_t *bmp_base;
        fnt_lookup_fp lookup;
    }font_t;
#endif

#endif
