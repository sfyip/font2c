/*
# Simple LCD simulator by using Linux /dev/fb0 to direct access the color pixel
# Tested in Ubuntu 18.04
# Procedure:
# 1) In Ubuntu, press [Ctrl + Alt + F2] to open a new console
# 2) sudo ./lcd_sim
*/

#include <stdint.h>
#include "lcd_sim.h"
#include "cour24.h"

#define BACK_COLOR     0x0000
#define BRSUH_COLOR    0xF800

void lcd_draw_font(uint16_t x, uint16_t y, char c)
{
    const uint8_t *bitmap = cour24_lookup_font(c);
    if(!bitmap)
    {
        return;
    }

    uint8_t font_width = cour24_get_width();
    uint8_t font_height = cour24_get_height();

    lcdsim_set_bound(x, y, x+font_width-1, y+font_height-1);

    uint16_t i = 0;
    uint8_t j = 0;
    uint16_t area = font_width * font_height;
    while(area--)
    {
        if(bitmap[i] & (1<<j))
        {
            lcdsim_write_data(BRSUH_COLOR);
        }
        else
        {
            lcdsim_write_data(BACK_COLOR);
        }

        if(j == 7)
        {
            ++i;
            j = 0;
        }
        else
        {
            ++j;
        }
    }
    lcdsim_set_bound(0, 0, LCD_WIDTH-1, LCD_HEIGHT-1);
}

void lcd_draw_string(uint16_t x, uint16_t y, const char *s)
{
    uint16_t orgx = x;

    char c;
    while((c = *s) != '\0')
    {
        if(c == '\n')
        {
            y += cour24_get_height();
            x = orgx;
        }
        else if(c == ' ')
        {
            x += cour24_get_width();
        }
        else
        {
            lcd_draw_font(x, y, c);
            x += cour24_get_width();
        }
        ++s;
    }

}

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

    lcd_draw_string(10, 10, "01\r\n234\r\n56789");

    lcdsim_deinit();
    
    return 0;
}
