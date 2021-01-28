
// font rendering engine by rle encoding, 2bpp with calc-margin = true
static void font_render_engine_margin_rle(const font_t *fnt, const font_symbol_t *sym)
{
    uint8_t font_width = sym->width;
    uint8_t font_height = sym->height;

    const uint8_t* bmp = (const uint8_t*)(fnt->bmp_base + sym->bmp_index);

    const uint8_t* bpp = (const uint8_t*)(fnt->bpp_base + sym->bpp_index);
    uint8_t bpp_count = 2;
    uint8_t pixelColor = (*bpp >> 6) & 0x03;

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
        bpp_count += 2;
        pixelColor = (*bpp >> 4) & 0x03;
        
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
                ++j;
                if(j == count && j != 15)
                {
                    bpp_count+=2;
                    if(bpp_count == 10)
                    {
                        ++bpp;
                        bpp_count = 2;
                    }

                    pixelColor = (*bpp >> (8-bpp_count)) & 0x03;
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
                            bpp_count+=2;
                            if(bpp_count == 10)
                            {
                                ++bpp;
                                bpp_count = 2;
                            }

                            pixelColor = (*bpp >> (8-bpp_count)) & 0x03;
                        }
                    }while(count == 0);
                }
            }
        }
    }
}

//=========================================================================

void lcdsim_draw_char(uint16_t x, uint16_t y, const font_t *fnt, utf8_t c)
{
    font_symbol_t sym;
    if(!fnt->lookup(c, &sym))
    {
        return;
    }

    uint8_t font_width = sym.width;
    uint8_t font_height = sym.height;

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

    font_render_engine_margin_rle(fnt, &sym);

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
            font_symbol_t sym;
            if(!fnt->lookup(c, &sym))
            {
                x += fnt->default_width;
            }
            else
            {
                x += sym.width;
            }
        }
        s += utf8_charlen(c);
    }
}