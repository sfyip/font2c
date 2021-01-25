#include "lcd_sim.h"


//=========================================================================

static int fp;
static char *fbp;
static struct fb_var_screeninfo vinfo;
static struct fb_fix_screeninfo finfo;

static rect_t lcdsim_screen_bond;
static point_t lcdsim_cur;

//=========================================================================

#define ROW_CLERANCE_SIZE   5

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

    if (fbp == (void*)-1)
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
    if(!fbp ||  (fbp == (void*)-1))
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
    lcdsim_set_bound(x, y, x+width-1, y+height-1);

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
#if (CONFIG_FONT_MARGIN == 0u && CONFIG_FONT_ENC == 0u)
// raw bitblt, 1bpp
static void font_render_engine_nomargin_raw(const font_t *fnt, const font_symbol_t *sym)
{
    uint16_t i = 0;
    uint8_t j = 0;
    uint16_t area = fnt->width * fnt->height;
    
    const uint8_t *bmp = (const uint8_t*)(fnt->bmp_base + sym->index);

    while(area--)
    {
        if(bmp[i] & (1<<j))
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
}
#endif

#if (CONFIG_FONT_MARGIN == 0u && CONFIG_FONT_ENC == 1u)
// rle, 1bpp
static void font_render_engine_nomargin_rle(const font_t *fnt, const font_symbol_t *sym)
{
    uint16_t count;
    bool pixelColor = 0;
    uint16_t i, j;
    
    const uint8_t* bmp = (const uint8_t*)(fnt->bmp_base + sym->index);

    for(i=0; i<sym->size; i++)
    {
        count = bmp[i];
        
        for(j=0; j<count; j++)
        {
            if(pixelColor)
            {
                lcdsim_write_data(brush_color);
            }
            else
            {
                lcdsim_write_data(back_color);
            }
        }
        
        if(count != 255)
        {
            pixelColor = !pixelColor;
        }
    }
}
#endif

#if (CONFIG_FONT_MARGIN > 0u && CONFIG_FONT_ENC == 0u)
// raw bitblt, 1bpp with margin
static void font_render_engine_margin_raw(const font_t *fnt, const font_symbol_t *sym)
{
#if (CONFIG_FONT_FIXED_WIDTH_HEIGHT > 0u)
    uint8_t font_width = fnt->width;
    uint8_t font_height = fnt->height;
#else
    uint8_t font_width = sym->width;
    uint8_t font_height = sym->height;
#endif

    uint8_t top = sym->margin_top;
    uint8_t bottom = font_height - sym->margin_bottom-1;
    uint8_t left = sym->margin_left;
    uint8_t right = font_width - sym->margin_right-1;
    
    uint16_t bi = sym->index;

    uint8_t h, w;
    uint8_t i=0;
    
    for(h=0; h<font_height; h++)
    {
        for(w=0; w<font_width; w++)
        {
            if(w < left || w > right || h < top || h > bottom)
            {
                // debug: lcdsim_write_data(LCD_BLUE_COLOR);
                lcdsim_write_data(back_color);
            }
            else
            {
                if(fnt->bmp_base[bi] & (1<<i))
                {
                    lcdsim_write_data(brush_color);
                }
                else
                {
                    lcdsim_write_data(back_color);
                }

                if(i==7)
                {
                    i = 0;
                    ++bi;
                }
                else
                {
                    ++i;
                }
            }
        }
    }
}
#endif

#if (CONFIG_FONT_MARGIN > 0u && CONFIG_FONT_ENC == 1u)
// rle bitblt, 1bpp with margin
static void font_render_engine_margin_rle(const font_t *fnt, const font_symbol_t *sym)
{
    bool pixelColor = 0;

#if (CONFIG_FONT_FIXED_WIDTH_HEIGHT > 0u)
    uint8_t font_width = fnt->width;
    uint8_t font_height = fnt->height;
#else
    uint8_t font_width = sym->width;
    uint8_t font_height = sym->height;
#endif

    uint8_t top = sym->margin_top;
    uint8_t bottom = font_height - sym->margin_bottom-1;
    uint8_t left = sym->margin_left;
    uint8_t right = font_width - sym->margin_right-1;
    
    uint16_t bi = sym->index;

    uint8_t h, w;
    uint16_t writeCount = 0;

    if(fnt->bmp_base[bi] == 0)
    {
        pixelColor = !pixelColor;
        ++bi;
    }

    for(h=0; h<font_height; h++)
    {
        for(w=0; w<font_width; w++)
        {
            if(w < left || w > right || h < top || h > bottom)
            {
                // debug: lcdsim_write_data(BLUE);
                lcdsim_write_data(back_color);
            }
            else
            {
                if(pixelColor)
                {
                    lcdsim_write_data(brush_color);
                }
                else
                {
                    lcdsim_write_data(back_color);
                }
                ++writeCount;
                
                if(writeCount == 255)
                {
                    writeCount = 0;
                    bi++;
                }
                
                if(writeCount == fnt->bmp_base[bi])
                {
                    writeCount = 0;
                    bi++;
                    pixelColor = !pixelColor;
                }
            }
        }
    }
}
#endif

//=========================================================================

void lcdsim_draw_char(uint16_t x, uint16_t y, const font_t *fnt, char c)
{
    font_symbol_t sym;
    if(!fnt->lookup(c, &sym))
    {
        return;
    }

#if (CONFIG_FONT_FIXED_WIDTH_HEIGHT > 0u)
    uint8_t font_width = fnt->width;
    uint8_t font_height = fnt->height;
#else
    uint8_t font_width = sym.width;
    uint8_t font_height = sym.height;
#endif

    lcdsim_set_bound(x, y, x+font_width-1, y+font_height-1);

#if (CONFIG_FONT_MARGIN == 0u && CONFIG_FONT_ENC == 0u)
    font_render_engine_nomargin_raw(fnt, &sym);
#elif(CONFIG_FONT_MARGIN == 0u && CONFIG_FONT_ENC == 1u)
    font_render_engine_nomargin_rle(fnt, &sym);
#elif(CONFIG_FONT_MARGIN > 0u && CONFIG_FONT_ENC == 0u)
    font_render_engine_margin_raw(fnt, &sym);
#elif(CONFIG_FONT_MARGIN > 0u && CONFIG_FONT_ENC == 1u)
    font_render_engine_margin_rle(fnt, &sym);
#else
    #error "Unsupported ENCODING_METHOD"
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
#if (CONFIG_FONT_FIXED_WIDTH_HEIGHT > 0u)
            y += (fnt->height + ROW_CLERANCE_SIZE);
#else
            y += (fnt->default_height + ROW_CLERANCE_SIZE);
#endif
            x = orgx;
        }
        else if(c == ' ')
        {
#if (CONFIG_FONT_FIXED_WIDTH_HEIGHT > 0u)
            x += fnt->width;
#else
            x += fnt->default_width;
#endif
        }
        else
        {
            lcdsim_draw_char(x, y, fnt, c);
#if (CONFIG_FONT_FIXED_WIDTH_HEIGHT > 0u)
            x += fnt->width;
#else
            font_symbol_t sym;
            if(!fnt->lookup(c, &sym))
            {
                x += fnt->default_width;
            }
            else
            {
                x += sym.width;
            }
#endif
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