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

#if (CONFIG_BPP == 2u)
static lcd_color_t brush_color66 = LCD_LIGHT_GREY_COLOR;
static lcd_color_t brush_color33 = LCD_DARK_GREY_COLOR;
#endif

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
        lcdsim_write_gram(color);
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

void lcdsim_write_gram(lcd_color_t color)
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

#if (CONFIG_BPP == 2u)
static void lcdsim_aa_brush_color()
{
    uint8_t lr = ((RGB565_TO_R8(brush_color) + RGB565_TO_R8(back_color)) / 3);
    uint8_t lg = ((RGB565_TO_G8(brush_color) + RGB565_TO_G8(back_color)) / 3);
    uint8_t lb = ((RGB565_TO_B8(brush_color) + RGB565_TO_B8(back_color)) / 3);
    
    brush_color33 = RGB888_TO_RGB565(lr,lg,lb);

    lr <<= 1;
    lg <<= 1;
    lb <<= 1;

    brush_color66 = RGB888_TO_RGB565(lr,lg,lb);
}
#endif

//=========================================================================
#if (CONFIG_FONT_MARGIN == 0u && CONFIG_FONT_ENC == 0u)
// raw bitblt, 1bpp
static void font_render_engine_nomargin_raw(const font_t *fnt, const font_symbol_t *sym)
{
    uint16_t i = 0;
    uint8_t j = 0;
    
#if (CONFIG_FONT_FIXED_WIDTH_HEIGHT > 0u)
    uint16_t area = fnt->width * fnt->height;
#else
    uint16_t area = sym->width * sym->height;
#endif

    const uint8_t *bmp = (const uint8_t*)(fnt->bmp_base + sym->bmp_index);

    while(area--)
    {
#if (CONFIG_BPP == 1u)
        if(bmp[i] & (1<<j))
        {
            lcdsim_write_gram(brush_color);
        }
        else
        {
            lcdsim_write_gram(back_color);
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
#elif (CONFIG_BPP == 2u)
        uint8_t color_pixel = (bmp[i] >> j) & 0x03;
        if(color_pixel == 3)
        {
            lcdsim_write_gram(brush_color);
        }
        else if(color_pixel == 2)
        {
            lcdsim_write_gram(brush_color66);
        }
        else if(color_pixel == 1)
        {
            lcdsim_write_gram(brush_color33);
        }
        else
        {
            lcdsim_write_gram(back_color);
        }

        if(j == 6)
        {
            ++i;
            j = 0;
        }
        else
        {
            j+=2;
        }
#endif
    }
}
#endif

#if (CONFIG_FONT_MARGIN == 0u && CONFIG_FONT_ENC == 1u)
// rle, 1bpp
static void font_render_engine_nomargin_rle(const font_t *fnt, const font_symbol_t *sym)
{
    bool nibbleToogle = false;
    uint16_t i = 0;
    uint8_t j, count;

    const uint8_t* bmp = (const uint8_t*)(fnt->bmp_base + sym->bmp_index);

#if (CONFIG_BPP == 1u)
    bool pixelColor = 0;
#elif (CONFIG_BPP == 2u)
    const uint8_t* bpp = (const uint8_t*)(fnt->bpp_base + sym->bpp_index);
    uint8_t bpp_count = 2;
    uint8_t pixelColor = (*bpp >> 6) & 0x03;
#endif

    while(i<sym->size)
    {
        if(!nibbleToogle)
        {
            count = bmp[i] >> 4;
        }
        else
        {
            count = bmp[i] & 0x0F;
            ++i;
        }

        nibbleToogle = !nibbleToogle;

        for(j=0; j<count; j++)
        {
#if (CONFIG_BPP == 1u)
            if(pixelColor)
            {
                lcdsim_write_gram(brush_color);
            }
            else
            {
                lcdsim_write_gram(back_color);
            }
#elif (CONFIG_BPP == 2u)
            if(pixelColor == 3)
            {
                lcdsim_write_gram(brush_color);
            }
            else if(pixelColor == 2)
            {
                lcdsim_write_gram(brush_color66);
            }
            else if(pixelColor == 1)
            {
                lcdsim_write_gram(brush_color33);
            }
            else
            {
                lcdsim_write_gram(back_color);
            }
#endif
        }
        
        if(count != 15)
        {
#if (CONFIG_BPP == 1u)
            pixelColor = !pixelColor;
#elif (CONFIG_BPP == 2u)
            bpp_count+=2;
            if(bpp_count == 10)
            {
                ++bpp;
                bpp_count = 2;
            }

            pixelColor = (*bpp >> (8-bpp_count)) & 0x03;
#endif
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
    
    uint16_t bi = sym->bmp_index;

    uint8_t h, w;
    uint8_t i=0;
    
    for(h=0; h<font_height; h++)
    {
        for(w=0; w<font_width; w++)
        {
            if(w < left || w > right || h < top || h > bottom)
            {
                // debug: lcdsim_write_gram(LCD_BLUE_COLOR);
                lcdsim_write_gram(back_color);
            }
            else
            {
#if (CONFIG_BPP == 1u)
                if(fnt->bmp_base[bi] & (1<<i))
                {
                    lcdsim_write_gram(brush_color);
                }
                else
                {
                    lcdsim_write_gram(back_color);
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
#elif (CONFIG_BPP == 2u)
                uint8_t color_pixel = (fnt->bmp_base[bi] >> i) & 0x03;
                if(color_pixel == 3)
                {
                    lcdsim_write_gram(brush_color);
                }
                else if(color_pixel == 2)
                {
                    lcdsim_write_gram(brush_color66);
                }
                else if(color_pixel == 1)
                {
                    lcdsim_write_gram(brush_color33);
                }
                else
                {
                    lcdsim_write_gram(back_color);
                }

                if(i==6)
                {
                    i = 0;
                    ++bi;
                }
                else
                {
                    i+=2;
                }

#endif
            }
        }
    }
}
#endif

#if (CONFIG_FONT_MARGIN > 0u && CONFIG_FONT_ENC == 1u)
// rle bitblt, 1bpp with margin
static void font_render_engine_margin_rle(const font_t *fnt, const font_symbol_t *sym)
{
#if (CONFIG_FONT_FIXED_WIDTH_HEIGHT > 0u)
    uint8_t font_width = fnt->width;
    uint8_t font_height = fnt->height;
#else
    uint8_t font_width = sym->width;
    uint8_t font_height = sym->height;
#endif

    const uint8_t* bmp = (const uint8_t*)(fnt->bmp_base + sym->bmp_index);

#if (CONFIG_BPP == 1u)
    bool pixelColor = 0;
#elif(CONFIG_BPP == 2u)
    const uint8_t* bpp = (const uint8_t*)(fnt->bpp_base + sym->bpp_index);
    uint8_t bpp_count = 2;
    uint8_t pixelColor = (*bpp >> 6) & 0x03;
#endif

    uint8_t top = sym->margin_top;
    uint8_t bottom = font_height - sym->margin_bottom-1;
    uint8_t left = sym->margin_left;
    uint8_t right = font_width - sym->margin_right-1;
    
    uint8_t h, w;

    uint8_t j = 0, count;

    bool nibbleToogle = false;

    count = *bmp >> 4;
    nibbleToogle = !nibbleToogle;

    if(count == 0)
    {
#if(CONFIG_BPP == 1u)
        pixelColor = !pixelColor;
#else
        bpp_count += 2;
        pixelColor = (*bpp >> 4) & 0x03;
#endif
        count = *bmp & 0x0F;
        ++bmp;
        nibbleToogle = !nibbleToogle;
    }

    for(h=0; h<font_height; h++)
    {
        for(w=0; w<font_width; w++)
        {
            if(w < left || w > right || h < top || h > bottom)
            {
                // debug: lcdsim_write_gram(LCD_BLUE_COLOR);
                lcdsim_write_gram(back_color);
            }
            else
            {
#if (CONFIG_BPP == 1u)
                if(pixelColor)
                {
                    lcdsim_write_gram(brush_color);
                }
                else
                {
                    lcdsim_write_gram(back_color);
                }
#elif (CONFIG_BPP == 2u)
                if(pixelColor == 3)
                {
                    lcdsim_write_gram(brush_color);
                }
                else if(pixelColor == 2)
                {
                    lcdsim_write_gram(brush_color66);
                }
                else if(pixelColor == 1)
                {
                    lcdsim_write_gram(brush_color33);
                }
                else
                {
                    lcdsim_write_gram(back_color);
                }
#endif
                ++j;
                if(j == count && j != 15)
                {
#if (CONFIG_BPP == 1u)
                    pixelColor = !pixelColor;
#elif (CONFIG_BPP == 2u)
                    bpp_count+=2;
                    if(bpp_count == 10)
                    {
                        ++bpp;
                        bpp_count = 2;
                    }

                    pixelColor = (*bpp >> (8-bpp_count)) & 0x03;
#endif
                }
                if(j == count)
                {
                    j = 0;
                    do{
                        if(!nibbleToogle)
                        {
                            count = *bmp >> 4;
                        }
                        else
                        {
                            count = *bmp & 0x0F;
                            ++bmp;
                        }
                        nibbleToogle = !nibbleToogle;
                        if(count == 0)
                        {
#if (CONFIG_BPP == 1u)
                            pixelColor = !pixelColor;
#elif (CONFIG_BPP == 2u)
                            bpp_count+=2;
                            if(bpp_count == 10)
                            {
                                ++bpp;
                                bpp_count = 2;
                            }

                            pixelColor = (*bpp >> (8-bpp_count)) & 0x03;
#endif
                        }
                    }while(count == 0);
                }
            }
        }
    }
}
#endif

//=========================================================================

void lcdsim_draw_char(uint16_t x, uint16_t y, const font_t *fnt, utf8_t c)
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

    utf8_t c;
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

#if (CONFIG_BPP == 2u)
    lcdsim_aa_brush_color();
#endif
}

//=========================================================================

void lcdsim_set_brush_color(lcd_color_t color)
{
    brush_color = color;

#if (CONFIG_BPP == 2u)
    lcdsim_aa_brush_color();
#endif
}

