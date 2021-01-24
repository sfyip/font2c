#ifndef _LCDSIM_H_
#define _LCDSIM_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h> 
#include <linux/fb.h>
#include <sys/mman.h>
#include <sys/ioctl.h> 
#include <stdint.h>
#include <stdbool.h>
#include "font.h"

//=========================================================================

#define LCD_BLACK_COLOR             0x0000
#define LCD_WHITE_COLOR             0xFFFF
#define LCD_RED_COLOR               0xF800
#define LCD_GREEN_COLOR             0x07E0
#define LCD_BLUE_COLOR              0x001F

#define LCD_WIDTH                   800
#define LCD_HEIGHT                  480

#define RGB565_TO_R8(color)         (((color) & 0xF800) >> 8)
#define RGB565_TO_G8(color)         (((color) & 0x07E0) >> 3)
#define RGB565_TO_B8(color)         (((color) & 0x001F) << 3)

//=========================================================================

#ifndef MIN
    #define MIN(a,b)(a<b?a:b)
#endif

#ifndef MAX
    #define MAX(a,b)(a>b?a:b)
#endif

//=========================================================================

typedef uint16_t lcd_color_t;

typedef struct
{
    uint32_t x;
    uint32_t y;
}point_t;

typedef struct
{
    uint32_t x0;
    uint32_t y0;
    uint32_t x1;
    uint32_t y1;
}rect_t;

//=========================================================================

void lcdsim_init(void);
void lcdsim_deinit(void);
void lcdsim_clear_screen(void);
void lcdsim_draw_pixel(uint16_t x, uint16_t y, lcd_color_t color);
void lcdsim_fill_rect(uint16_t x, uint16_t y, uint16_t width, uint16_t height, lcd_color_t color);
void lcdsim_set_bound(uint16_t startx, uint16_t starty, uint16_t endx, uint16_t endy);
void lcdsim_write_data(lcd_color_t color);
void lcdsim_draw_char(uint16_t x, uint16_t y, const font_t *fnt, char c);
void lcdsim_draw_string(uint16_t x, uint16_t y, const font_t *fnt, const char *s);
void lcdsim_set_back_color(lcd_color_t color);
void lcdsim_set_brush_color(lcd_color_t color);

#endif
