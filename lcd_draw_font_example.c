
#if (CONFIG_FONT_ENC == 0u)
// raw bitblt, 1bpp
static void font_render_engine_0(const font_t *fnt, const font_symbol_t *sym)
{
    uint16_t i = 0;
    uint8_t j = 0;
    uint16_t area = fnt->width * fnt->height;
    
    const uint8_t *bmp = (const uint8_t*)(sym);

    while(area--)
    {
        if(bmp[i] & (1<<j))
        {
            LCD_WR_DATA(brush_color);
        }
        else
        {
            LCD_WR_DATA(back_color);
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

#if (CONFIG_FONT_ENC == 1u)
// rle, 1bpp
static void font_render_engine_1(const font_t *fnt, const font_symbol_t *sym)
{
    uint16_t count;
    uint8_t pixelColor = 0;
    uint16_t i, j;
    
    const uint8_t* bmp = (const uint8_t*)(fnt->bmp_base + sym->index);

    for(i=0; i<sym->size; i++)
    {
        count = bmp[i];
        
        for(j=0; j<count; j++)
        {
            if(pixelColor)
            {
                LCD_WR_DATA(brush_color);
            }
            else
            {
                LCD_WR_DATA(back_color);
            }
        }
        
        if(count != 255)
        {
            pixelColor ^= 1;
        }
    }
}
#endif

#if (CONFIG_FONT_ENC == 2u)
// raw bitblt, 1bpp with margin
static void font_render_engine_2(const font_t *fnt, const font_symbol_t *sym)
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
                // debug: LCD_WR_DATA(LCD_BLUE_COLOR);
                LCD_WR_DATA(back_color);
            }
            else
            {
                if(fnt->bmp_base[bi] & (1<<i))
                {
                    LCD_WR_DATA(brush_color);
                }
                else
                {
                    LCD_WR_DATA(back_color);
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

#if (CONFIG_FONT_ENC == 3u)
// raw bitblt, 1bpp with margin
static void font_render_engine_3(const font_t *fnt, const font_symbol_t *sym)
{
    uint8_t pixelColor = 0;

    uint8_t font_width = fnt->width;
    uint8_t font_height = fnt->height;

    uint8_t top = sym->margin_top;
    uint8_t bottom = font_height - sym->margin_bottom-1;
    uint8_t left = sym->margin_left;
    uint8_t right = font_width - sym->margin_right-1;
    
    uint16_t bi = sym->index;

    uint8_t h, w;
    uint16_t writeCount = 0;

    if(fnt->bmp_base[bi] == 0)
    {
        pixelColor ^= 1;
        ++bi;
    }

    for(h=0; h<font_height; h++)
    {
        for(w=0; w<font_width; w++)
        {
            if(w < left || w > right || h < top || h > bottom)
            {
                // debug: LCD_WR_DATA(BLUE);
                LCD_WR_DATA(back_color);
            }
            else
            {
                if(pixelColor)
                {
                    LCD_WR_DATA(brush_color);
                }
                else
                {
                    LCD_WR_DATA(back_color);
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
                    pixelColor ^= 1;
                }
            }
        }
    }
}
#endif

//=========================================================================

void lcdsim_draw_char(uint16_t x, uint16_t y, const font_t *fnt, char c)
{
    const font_symbol_t *sym = fnt->lookup(c);
    if(!sym)
    {
        return;
    }

#if (CONFIG_FONT_FIXED_WIDTH_HEIGHT > 0u)
    uint8_t font_width = fnt->width;
    uint8_t font_height = fnt->height;
#else
    uint8_t font_width = sym->width;
    uint8_t font_height = sym->height;
#endif

    //lcdsim_set_bound(x, y, x+font_width-1, y+font_height-1);
    LCD_WR_REG(0X2A);
    LCD_WR_DATA( x >> 8 );
    LCD_WR_DATA( x & 0xff );              /* column start */
    LCD_WR_DATA( (x+fs->width-1) >> 8 );  /* column end   */
    LCD_WR_DATA( (x+fs->width-1) & 0xff );
    
    LCD_WR_REG(0X2B);            
    LCD_WR_DATA( y >> 8 );                /* page start   */
    LCD_WR_DATA( y & 0xff );
    LCD_WR_DATA( (y+fs->height-1) >> 8);  /* page end     */
    LCD_WR_DATA( (y+fs->height-1) & 0xff);
    
    LCD_WR_REG(0x2C);                     /* Write GRAM   */

#if (CONFIG_FONT_ENC == 0u)
    font_render_engine_0(fnt, sym);
#elif(CONFIG_FONT_ENC == 1u)
    font_render_engine_1(fnt, sym);
#elif(CONFIG_FONT_ENC == 2u)
    font_render_engine_2(fnt, sym);
#elif(CONFIG_FONT_ENC == 3u)
    font_render_engine_3(fnt, sym);
#else
    #error "Unsupported ENCODING_METHOD"
#endif

    //lcdsim_set_bound(0, 0, LCD_WIDTH-1, LCD_HEIGHT-1);
    /* Release the chop region */
    LCD_WR_REG(0X2A);                   /* column address control set */
    LCD_WR_DATA(0);
    LCD_WR_DATA(0);
    LCD_WR_DATA((lcd_dev.width-1) >>8);
    LCD_WR_DATA((lcd_dev.width-1) &0xff);
    
    LCD_WR_REG(0X2B);                   /* page address control set */
    LCD_WR_DATA(0);
    LCD_WR_DATA(0);  
    LCD_WR_DATA((lcd_dev.height-1) >>8);
    LCD_WR_DATA((lcd_dev.height-1) &0xff);
}

//=========================================================================

#if (CONFIG_FONT_FIXED_WIDTH_HEIGHT > 0u)

void lcdsim_draw_string(uint16_t x, uint16_t y, const font_t *fnt, const char *s)
{
    uint16_t orgx = x;

    char c;
    while((c = *s) != '\0')
    {
        if(c == '\n')
        {
            y += (fnt->height + ROW_CLERANCE_SIZE);
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

#else

void lcdsim_draw_string(uint16_t x, uint16_t y, const font_t *fnt, const char *s)
{
    uint16_t orgx = x;
    
    char c;
    while((c = *s) != '\0')
    {
        if(c == '\n')
        {
            y += (fnt->default_height + ROW_CLERANCE_SIZE);
            x = orgx;
        }
        else if(c == ' ')
        {
            x += fnt->default_width;
        }
        else
        {
            lcdsim_draw_char(x, y, fnt, c);
            const font_symbol_t *sym = fnt->lookup(c);
            if(!sym)
            {
                x += fnt->default_width;
            }
            else
            {
                x += sym->width;
            }
        }
        ++s;
    }
}

#endif