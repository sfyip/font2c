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

    utf8_t c;
    while((c = utf8_getchar(s)) != '\0')
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
        s += utf8_charlen(c);
    }
}