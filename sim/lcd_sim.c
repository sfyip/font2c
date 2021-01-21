#include "lcd_sim.h"


//=========================================================================

static int fp;
static char *fbp;
static struct fb_var_screeninfo vinfo;
static struct fb_fix_screeninfo finfo;

static rect_t lcdsim_screen_bond;
static point_t lcdsim_cur;

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

void lcdsim_draw_pixel(uint16_t x, uint16_t y, colordef_t color)
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

    uint8_t r = ((color & 0xF800) >> 8);
    uint8_t g = ((color & 0x07E0) >> 3);
    uint8_t b = ((color & 0x001F) << 3);

    *(fbp + location) = b;        // blue
    *(fbp + location + 1) = g;    // green
    *(fbp + location + 2) = r;    // red
    *(fbp + location + 3) = 0;    // alpha
}

//=========================================================================

void lcdsim_fill_rect(uint16_t x, uint16_t y, uint16_t width, uint16_t height, colordef_t color)
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

void lcdsim_write_data(colordef_t color)
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
