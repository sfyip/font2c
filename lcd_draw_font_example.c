
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

    const uint8_t *bmp = (const uint8_t*)(fnt->bmp_base + sym->index);

    while(area--)
    {
        if(bmp[i] & (1<<j))
        {
            //lcdsim_write_gram(brush_color);
            LCD_WR_DATA(brush_color);
        }
        else
        {
            //lcdsim_write_gram(back_color);
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

#if (CONFIG_FONT_MARGIN == 0u && CONFIG_FONT_ENC == 1u)
// rle, 1bpp
static void font_render_engine_nomargin_rle(const font_t *fnt, const font_symbol_t *sym)
{
    bool pixelColor = 0;
    bool nibbleToogle = false;
    uint16_t i = 0;
    uint8_t j, count;

    const uint8_t* bmp = (const uint8_t*)(fnt->bmp_base + sym->index);

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
            if(pixelColor)
            {
                //lcdsim_write_gram(brush_color);
                LCD_WR_DATA(brush_color);
            }
            else
            {
                //lcdsim_write_gram(back_color);
                LCD_WR_DATA(back_color);
            }
        }
        
        if(count != 15)
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
                // debug: lcdsim_write_gram(LCD_BLUE_COLOR);
                //lcdsim_write_gram(back_color);
                LCD_WR_DATA(back_color);
            }
            else
            {
                if(fnt->bmp_base[bi] & (1<<i))
                {
                    //lcdsim_write_gram(brush_color);
                    LCD_WR_DATA(brush_color);
                }
                else
                {
                    //lcdsim_write_gram(back_color);
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

    uint8_t j = 0, count;

    bool nibbleToogle = false;

    count = fnt->bmp_base[bi] >> 4;
    nibbleToogle = !nibbleToogle;

    if(count == 0)
    {
        pixelColor = !pixelColor;
        count = fnt->bmp_base[bi] & 0x0F;
        ++bi;
        nibbleToogle = !nibbleToogle;
    }

    for(h=0; h<font_height; h++)
    {
        for(w=0; w<font_width; w++)
        {
            if(w < left || w > right || h < top || h > bottom)
            {
                // debug: lcdsim_write_gram(LCD_BLUE_COLOR);
                //lcdsim_write_gram(back_color);
                LCD_WR_DATA(back_color);
            }
            else
            {
                if(pixelColor)
                {
                    //lcdsim_write_gram(brush_color);
                    LCD_WR_DATA(brush_color);
                }
                else
                {
                    //lcdsim_write_gram(back_color);
                    LCD_WR_DATA(back_color);
                }
                
                ++j;
                if(j == count && j != 15)
                {
                    pixelColor = !pixelColor;
                }
                if(j == count)
                {
                    j = 0;
                    do{
                        if(!nibbleToogle)
                        {
                            count = fnt->bmp_base[bi] >> 4;
                        }
                        else
                        {
                            count = fnt->bmp_base[bi] & 0x0F;
                            ++bi;
                        }
                        nibbleToogle = !nibbleToogle;
                        if(count == 0)
                        {
                            pixelColor = !pixelColor;
                        }
                    }while(count == 0);
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