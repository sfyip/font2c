#!/bin/bash

dalay_time=3

sudo ./lcd_fixedsize_raw_1bpp
sleep $dalay_time
sudo ./lcd_fixedsize_rawbb_1bpp
sleep $dalay_time
#sudo ./lcd_fixedsize_u8g2_1bpp
#sleep $dalay_time
#sudo ./lcd_fixedsize_lvgl_1bpp
#sleep $dalay_time

sudo ./lcd_varsize_raw_1bpp
sleep $dalay_time
sudo ./lcd_varsize_rawbb_1bpp
sleep $dalay_time
#sudo ./lcd_varsize_u8g2_1bpp
#sleep $dalay_time
#sudo ./lcd_varsize_lvgl_1bpp
#sleep $dalay_time

sudo ./lcd_fixedsize_raw_2bpp
sleep $dalay_time
sudo ./lcd_fixedsize_rawbb_2bpp
sleep $dalay_time
#sudo ./lcd_fixedsize_u8g2_2bpp
#sleep $dalay_time
#sudo ./lcd_fixedsize_lvgl_2bpp
#sleep $dalay_time

sudo ./lcd_varsize_raw_2bpp
sleep $dalay_time
sudo ./lcd_varsize_rawbb_2bpp
sleep $dalay_time
#sudo ./lcd_varsize_u8g2_2bpp
#sleep $dalay_time
#sudo ./lcd_varsize_lvgl_2bpp
#sleep $dalay_time

sudo ./lcd_varsize_rawbb_2bpp_utf8
sleep $dalay_time