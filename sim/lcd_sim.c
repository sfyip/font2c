#include "lcd_sim.h"


//=========================================================================

static int fp;
static char *fbp;
static struct fb_var_screeninfo vinfo;
static struct fb_fix_screeninfo finfo;

static rect_t lcdsim_screen_bond;
static point_t lcdsim_cur;

//=========================================================================

static lcd_color_t back_color = LCD_BLACK_COLOR;
static lcd_color_t brush_color = LCD_WHITE_COLOR;

//=========================================================================

void lcdsim_init()
{
    fp = open ("/dev/fb0",O_RDWR);

    if (fp < 0){

        printf("Error : Can not open framebuffer device\n");

        exit(1);

    }

    if (ioctl(fp,FBIOGET_FSCREENINFO,&finfo)){

        printf("Error reading fixed information\n");

        exit(2);

    }

    if (ioctl(fp,FBIOGET_VSCREENINFO,&vinfo)){

        printf("Error reading variable information\n");

        exit(3);

    }

    uint32_t screensize = vinfo.xres * vinfo.yres * vinfo.bits_per_pixel / 8;

    fbp =(char *) mmap (0, screensize, PROT_READ | PROT_WRITE, MAP_SHARED, fp,0);

    if (((int) fbp) == -1)
    {
        printf ("Error: failed to map framebuffer device to memory.\n");
        exit (4);
    }

    lcdsim_clear_screen();
}

//=========================================================================

void lcdsim_deinit()
{
    uint32_t screensize = vinfo.xres * vinfo.yres * vinfo.bits_per_pixel / 8;
    munmap (fbp, screensize);
    close (fp);
}

//=========================================================================

void lcdsim_clear_screen()
{
    uint16_t width = MIN(LCD_WIDTH, vinfo.xres);
    uint16_t height = MIN(LCD_HEIGHT, vinfo.yres);
    lcdsim_fill_rect(0, 0, width, height, LCD_BLACK_COLOR);
}

//=========================================================================

void lcdsim_draw_pixel(uint16_t x, uint16_t y, lcd_color_t color)
{
    if(!fbp || ((int)fbp) == -1)
    {
        return;
    }

    if(x >= LCD_WIDTH || y >= LCD_HEIGHT)
    {
        return;
    }

    uint32_t location = x * (vinfo.bits_per_pixel / 8) + y * finfo.line_length;

    uint8_t r = RGB565_TO_R8(color);
    uint8_t g = RGB565_TO_G8(color);
    uint8_t b = RGB565_TO_B8(color);

    *(fbp + location) = b;        // blue
    *(fbp + location + 1) = g;    // green
    *(fbp + location + 2) = r;    // red
    *(fbp + location + 3) = 0;    // alpha
}

//=========================================================================

void lcdsim_fill_rect(uint16_t x, uint16_t y, uint16_t width, uint16_t height, lcd_color_t color)
{
    lcdsim_set_bound(x, y, x+width, y+height);

    uint32_t area = width * height;
    while(area--)
    {
        lcdsim_write_data(color);
    }
}

//=========================================================================

void lcdsim_set_bound(uint16_t startx, uint16_t starty, uint16_t endx, uint16_t endy)
{
    lcdsim_screen_bond.x0 = startx;
    lcdsim_screen_bond.y0 = starty;
    lcdsim_screen_bond.x1 = endx;
    lcdsim_screen_bond.y1 = endy;

    lcdsim_cur.x = startx;
    lcdsim_cur.y = starty;
}

//=========================================================================

void lcdsim_write_data(lcd_color_t color)
{
    lcdsim_draw_pixel(lcdsim_cur.x, lcdsim_cur.y, color);

    ++lcdsim_cur.x;
    if(lcdsim_cur.x > lcdsim_screen_bond.x1)
    {
        lcdsim_cur.x = lcdsim_screen_bond.x0;
        ++lcdsim_cur.y;
    }

    if(lcdsim_cur.y > lcdsim_screen_bond.y1)
    {
        lcdsim_cur.x = lcdsim_screen_bond.x0;
        lcdsim_cur.y = lcdsim_screen_bond.y0;
    }
}

//=========================================================================

void lcdsim_draw_char(uint16_t x, uint16_t y, const font_t *fnt, char c)
{
    const uint8_t *bitmap = fnt->lookup(c);
    if(!bitmap)
    {
        return;
    }

    uint8_t font_width = fnt->width;
    uint8_t font_height = fnt->height;

    lcdsim_set_bound(x, y, x+font_width-1, y+font_height-1);

#if (CONFIG_FONT_ENC == 0u)
    uint16_t i = 0;
    uint8_t j = 0;
    uint16_t area = font_width * font_height;
    while(area--)
    {
        if(bitmap[i] & (1<<j))
        {
            lcdsim_write_data(brush_color);
        }
        else
        {
            lcdsim_write_data(back_color);
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
#elif(CONFIG_FONT_ENC == 1u)

#endif

    lcdsim_set_bound(0, 0, LCD_WIDTH-1, LCD_HEIGHT-1);
}

//=========================================================================

void lcdsim_draw_string(uint16_t x, uint16_t y, const font_t *fnt, const char *s)
{
    uint16_t orgx = x;

    char c;
    while((c = *s) != '\0')
    {
        if(c == '\n')
        {
            y += fnt->height;
            x = orgx;
        }
        else if(c == ' ')
        {
            x += fnt->width;
        }
        else
        {
            lcdsim_draw_char(x, y, fnt, c);
            x += fnt->width;
        }
        ++s;
    }

}

//=========================================================================

void lcdsim_set_back_color(lcd_color_t color)
{
    back_color = color;
}

//=========================================================================

void lcdsim_set_brush_color(lcd_color_t color)
{
    brush_color = color;
}