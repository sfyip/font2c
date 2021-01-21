/*
# Simple LCD simulator by using Linux /dev/fb0 to direct access the color pixel
# Tested in Ubuntu 18.04
# Procedure:
# 1) In Ubuntu, press [Ctrl + Alt + F2] to open a new console
# 2) sudo ./lcd_sim
*/

#include <stdint.h>
#include "lcd_sim.h"

//=========================================================================

#define CONFIG_FONT_ENC   0u

#if (CONFIG_FONT_ENC == 0u)
    #include "cour24.h"
#endif

//=========================================================================

font_t *select_fnt = &cour24;

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

    lcdsim_set_brush_color(LCD_RED_COLOR);

    lcdsim_draw_string(10, 10, select_fnt, "0123456789:\r\nABCDEFGHIJKLMN\r\nOPQRSTUVWXYZ\r\nabcdefghijklmn\r\nopqrstuvwxyz");

    lcdsim_deinit();
    
    return 0;
}
