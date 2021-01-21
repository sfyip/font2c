#ifndef _LCDSIM_H_
#define _LCDSIM_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h> 
#include <linux/fb.h>
//#include <time.h>
#include <sys/mman.h>
#include <sys/ioctl.h> 
#include <stdint.h>

//=========================================================================

#define LCD_BLACK_COLOR             0x0000
#define LCD_WHITE_COLOR             0xFFFF
#define LCD_RED_COLOR               0xF800
#define LCD_GREEN_COLOR             0x07E0
#define LCD_BLUE_COLOR              0x001F

#define LCD_WIDTH                   800
#define LCD_HEIGHT                  480

//=========================================================================

#ifndef MIN
    #define MIN(a,b)(a<b?a:b)
#endif

#ifndef MAX
    #define MAX(a,b)(a>b?a:b)
#endif

//=========================================================================

typedef uint16_t colordef_t;

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
void lcdsim_draw_pixel(uint16_t x, uint16_t y, colordef_t color);
void lcdsim_fill_rect(uint16_t x, uint16_t y, uint16_t width, uint16_t height, colordef_t color);
void lcdsim_set_bound(uint16_t startx, uint16_t starty, uint16_t endx, uint16_t endy);
void lcdsim_write_data(colordef_t color);

#endif
