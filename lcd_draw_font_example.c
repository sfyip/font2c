// Example on ILI9806

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
    
#if (COMPRESS_LV == 0u)
    // Compress LV: 0
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
#elif (COMPRESS_LV == 1u)
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
#else
    #error "COMPRESS_LV not defined"
#endif
    
    /* Release the chop region */
    LCD_WR_REG(0X2A);                   /* column address control set */
    LCD_WR_DATA(0);
    LCD_WR_DATA(0);
    LCD_WR_DATA((lcd_dev.width) >>8);
    LCD_WR_DATA((lcd_dev.width) &0xff);
    
    LCD_WR_REG(0X2B);                   /* page address control set */
    LCD_WR_DATA(0);
    LCD_WR_DATA(0);  
    LCD_WR_DATA((lcd_dev.height) >>8);
    LCD_WR_DATA((lcd_dev.height) &0xff);
}