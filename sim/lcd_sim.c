#include "lcd_sim.h"
#include "utf8.h"

//=========================================================================

static int fp;
static char *fbp;
static struct fb_var_screeninfo vinfo;
static struct fb_fix_screeninfo finfo;

static rect_t lcdsim_screen_bond;
static point_t lcdsim_cur;

//=========================================================================

#define ROW_CLERANCE_SIZE   5

#if (CONFIG_BPP == 1u)
static lcd_color_t brush_color[2] = {LCD_BLACK_COLOR, LCD_WHITE_COLOR};
#elif (CONFIG_BPP == 2u)
static lcd_color_t brush_color[4] = {LCD_BLACK_COLOR, LCD_DARK_GREY_COLOR, LCD_LIGHT_GREY_COLOR, LCD_WHITE_COLOR};
#elif (CONFIG_BPP == 4u)
static lcd_color_t brush_color[16] = {  LCD_BLACK_COLOR,
                                        LCD_BLACK_COLOR,
                                        LCD_BLACK_COLOR,
                                        LCD_BLACK_COLOR,
                                        LCD_BLACK_COLOR,
                                        LCD_DARK_GREY_COLOR,
                                        LCD_DARK_GREY_COLOR,
                                        LCD_DARK_GREY_COLOR,
                                        LCD_LIGHT_GREY_COLOR,
                                        LCD_LIGHT_GREY_COLOR,
                                        LCD_LIGHT_GREY_COLOR,
                                        LCD_LIGHT_GREY_COLOR,
                                        LCD_WHITE_COLOR,
                                        LCD_WHITE_COLOR,
                                        LCD_WHITE_COLOR,
                                        LCD_WHITE_COLOR};
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

#if (CONFIG_BPP == 2u || CONFIG_BPP == 4u)
static void lcdsim_aa_brush_color()
{
    uint8_t i;
    uint8_t lr;
    uint8_t lg;
    uint8_t lb;

#if (CONFIG_BPP == 2)
    uint8_t idxmax = 2;
#elif(CONFIG_BPP == 4)
    uint8_t idxmax = 14;
#endif

    for(i=1; i<=idxmax; i++)
    {
#if (CONFIG_BPP == 2)
        lr = (((uint16_t)RGB565_TO_R8(brush_color[3]))*i + ((uint16_t)RGB565_TO_R8(brush_color[0]))*(3-i))/3;
        lg = (((uint16_t)RGB565_TO_G8(brush_color[3]))*i + ((uint16_t)RGB565_TO_G8(brush_color[0]))*(3-i))/3;
        lb = (((uint16_t)RGB565_TO_B8(brush_color[3]))*i + ((uint16_t)RGB565_TO_B8(brush_color[0]))*(3-i))/3;
#elif(CONFIG_BPP == 4)
        lr = (((uint16_t)RGB565_TO_R8(brush_color[15]))*i + ((uint16_t)RGB565_TO_R8(brush_color[0]))*(15-i))/15;
        lg = (((uint16_t)RGB565_TO_G8(brush_color[15]))*i + ((uint16_t)RGB565_TO_G8(brush_color[0]))*(15-i))/15;
        lb = (((uint16_t)RGB565_TO_B8(brush_color[15]))*i + ((uint16_t)RGB565_TO_B8(brush_color[0]))*(15-i))/15;
#endif
        brush_color[i] = RGB888_TO_RGB565(lr, lg, lb);
    }
}
#endif

//=========================================================================
#if (CONFIG_FONT_MARGIN == 0u && CONFIG_FONT_ENC == 0u)
// encoding method: raw
static void font_render_engine_raw(const font_t *fnt, const font_symbol_t *sym)
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
        uint8_t color_pixel = (bmp[i] >> j) & 0x01;
        lcdsim_write_gram(brush_color[color_pixel]);

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
        lcdsim_write_gram(brush_color[color_pixel]);

        if(j == 6)
        {
            ++i;
            j = 0;
        }
        else
        {
            j+=2;
        }
#elif (CONFIG_BPP == 4u)
        uint8_t color_pixel = (bmp[i] >> j) & 0x0F;
        lcdsim_write_gram(brush_color[color_pixel]);

        if(j == 4)
        {
            ++i;
            j = 0;
        }
        else
        {
            j+=4;
        }
#endif
    }
}
#endif

#if (CONFIG_FONT_ENC == 1u)
// encoding method: rawbb
static void font_render_engine_rawbb(const font_t *fnt, const font_symbol_t *sym)
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
                lcdsim_write_gram(brush_color[0]);
            }
            else
            {
#if (CONFIG_BPP == 1u)
                uint8_t color_pixel = (fnt->bmp_base[bi] >> i) & 0x01;
                lcdsim_write_gram(brush_color[color_pixel]);

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
                lcdsim_write_gram(brush_color[color_pixel]);

                if(i==6)
                {
                    i = 0;
                    ++bi;
                }
                else
                {
                    i+=2;
                }
#elif (CONFIG_BPP == 4u)
                uint8_t color_pixel = (fnt->bmp_base[bi] >> i) & 0x0F;
                lcdsim_write_gram(brush_color[color_pixel]);

                if(i==4)
                {
                    i = 0;
                    ++bi;
                }
                else
                {
                    i+=4;
                }
#endif

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

#if (CONFIG_FONT_ENC == 0u)
    font_render_engine_raw(fnt, &sym);
#elif(CONFIG_FONT_ENC == 1u)
    font_render_engine_rawbb(fnt, &sym);
#elif(CONFIG_FONT_ENC == 2u)
    font_render_engine_u8g2(fnt, &sym);
#elif(CONFIG_FONT_ENC == 3u)
    font_render_engine_lvgl(fnt, &sym);
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
    while((c = utf8_getchar(s)) != '\0')
    {
        if(c == '\r')
        {
            // no operation
        }
        else if(c == '\n')
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
        s += utf8_charlen(c);
    }
}

//=========================================================================

void lcdsim_set_back_color(lcd_color_t color)
{
    brush_color[0] = color;

#if (CONFIG_BPP== 2u || CONFIG_BPP == 4u)
    lcdsim_aa_brush_color();
#endif
}

//=========================================================================

void lcdsim_set_brush_color(lcd_color_t color)
{
    brush_color[(1<<CONFIG_BPP) - 1] = color;

#if (CONFIG_BPP== 2u || CONFIG_BPP == 4u)
    lcdsim_aa_brush_color();
#endif
}

