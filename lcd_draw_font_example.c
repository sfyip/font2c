
#define ENCODING_METHOD 0u

void LCD_DrawFont(uint16_t x, uint16_t y, const font_symbol_t *fs)
{
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
    
#if (ENCODING_METHOD == 0u)
    // Encoding method: 0
    uint16_t i;
    uint16_t area = (fs->width * fs->height) >> 3;
    uint8_t j;
    for( i=0; i < area; i++ )
    {
        for(j=0; j<8; j++)
        {
            if(fs->bitmap[i] & (1<<j))
            {
                LCD_WR_DATA(_brushColor);
            }
            else
            {
                LCD_WR_DATA(_backColor);
            }
        }
    }
#elif (ENCODING_METHOD == 1u)
    uint16_t count;
    uint8_t pixelColor = 0;
    uint16_t i, j;
    
    for(i=0; i<fs->bitmapSize; i++)
    {
        count = fs->bitmap[i];
        if(count == 0)
            count = 256;
        for(j=0; j<count; j++)
        {
          if(pixelColor)
          {
              LCD_WR_DATA(_brushColor);
          }
          else
          {
              LCD_WR_DATA(_backColor);
          }
        }
        
        if(count != 256)
        {
            pixelColor ^= 1;
        }
    }
#elif (ENCODING_METHOD == 2u)
    uint16_t bi = 4;
    
    uint8_t top = fs->bitmap[0];
    uint8_t bottom = fs->height - fs->bitmap[1]-1;
    uint8_t left = fs->bitmap[2];
    uint8_t right = fs->width - fs->bitmap[3]-1;
    
    uint8_t h, w;
    uint8_t i=0;
    
    for(h=0; h<fs->height; h++)
    {
        for(w=0; w<fs->width; w++)
        {
            if(w < left || w > right || h < top || h > bottom)
            {
                // debug: LCD_WR_DATA(BLUE);
                LCD_WR_DATA(_backColor);
            }
            else
            {
                if(fs->bitmap[bi] & (1<<i))
                {
                    LCD_WR_DATA(_brushColor);
                }
                else
                {
                    LCD_WR_DATA(_backColor);
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
#elif (ENCODING_METHOD == 3u)
    uint8_t pixelColor = 0;
    uint16_t bi = 4;
    
    uint8_t top = fs->bitmap[0];
    uint8_t bottom = fs->height - fs->bitmap[1] - 1;
    uint8_t left = fs->bitmap[2];
    uint8_t right = fs->width - fs->bitmap[3] - 1;
    
    uint8_t h, w;
    uint16_t writeCount = 0;
    
    if(fs->bitmap[4] == 0x01)
    {
        pixelColor = 1;
        bi = 5;
    }
    
    for(h=0; h<fs->height; h++)
    {
        for(w=0; w<fs->width; w++)
        {
            if(w < left || w > right || h < top || h > bottom)
            {
                // debug: LCD_WR_DATA(BLUE);
                LCD_WR_DATA(_backColor);
            }
            else
            {
                if(pixelColor)
                {
                    LCD_WR_DATA(_brushColor);
                }
                else
                {
                    LCD_WR_DATA(_backColor);
                }
                ++writeCount;
                
                if(writeCount == 255 && fs->bitmap[bi] == 0)
                {
                    writeCount = 0;
                    bi++;
                }
                else if(writeCount == fs->bitmap[bi])
                {
                    writeCount = 0;
                    bi++;
                    pixelColor ^= 1;
                }
            }
        }
    }
#else
    #error "Unsupported ENCODING_METHOD"
#endif
    
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
