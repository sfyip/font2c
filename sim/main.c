/*
# Simple LCD simulator by using Linux /dev/fb0 to direct access the color pixel
# Tested in Ubuntu 18.04
*/

#include <stdint.h>

#include "lcd_sim.h"

//=========================================================================
#if (TEST_UTF8 > 0u)
    #include "microhei32.h"
    font_t *select_fnt = &microhei32;
#elif (CONFIG_FONT_FIXED_WIDTH_HEIGHT > 0u)
    #include "freemono24.h"
    font_t *select_fnt = &freemono24;
#else
    #include "freesans32.h"
    font_t *select_fnt = &freesans32;
#endif

//=========================================================================

int main ()
{
    lcdsim_init();
#if 0
    lcdsim_set_bound(0, 0, 800, 480);
    lcdsim_fill_rect(30, 50, 300, 200, LCD_BLUE_COLOR);

    for(uint8_t i=0; i<10; i++)
    {
        lcdsim_write_data(LCD_RED_COLOR);
    }

    lcdsim_draw_pixel(100, 100, GREEN_COLOR);
#endif

#if (CONFIG_FONT_MARGIN == 0u && CONFIG_FONT_ENC == 0u)
    lcdsim_set_brush_color(LCD_RED_COLOR);
#elif (CONFIG_FONT_MARGIN == 0u && CONFIG_FONT_ENC == 1u)
    lcdsim_set_brush_color(LCD_GREEN_COLOR);
#elif (CONFIG_FONT_MARGIN > 0u && CONFIG_FONT_ENC == 0u)
    lcdsim_set_brush_color(LCD_CYAN_COLOR);
#elif (CONFIG_FONT_MARGIN > 0u && CONFIG_FONT_ENC == 1u)
    lcdsim_set_brush_color(LCD_YELLOW_COLOR);
#endif

#if (TEST_UTF8 > 0u)
   lcdsim_draw_string(10, 10, select_fnt, "0123456789:\r\nabcdefghijklmn\r\nopqrstuvwxyz\r\nABCDEFGHIJKLMN\r\nOPQRSTUVWXYZ\r\n\xe6\xb8\xac\xe8\xa9\xa6\xe9\x96\x93\xe8\xb7\x9d\xe3\x83\x86\xe3\x82\xb9\xe3\x83\x88");
#else
    lcdsim_draw_string(10, 10, select_fnt, "0123456789:\r\nabcdefghijklmn\r\nopqrstuvwxyz\r\nABCDEFGHIJKLMN\r\nOPQRSTUVWXYZ");
#endif

    lcdsim_deinit();
    
    return 0;
}
