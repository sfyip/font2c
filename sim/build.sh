#!/bin/bash

# Simple LCD simulator by using Linux /dev/fb0 to direct access the color pixel
# Tested in Ubuntu 20.04

# fixed width and height, 1bpp
gcc -o lcd_fixedsize_raw_1bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freemono24_fixedsize_raw_1bpp.c
gcc -o lcd_fixedsize_rawbb_1bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freemono24_fixedsize_rawbb_1bpp.c
#gcc -o lcd_fixedsize_u8g2_1bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_ENC=2 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freemono24_fixedsize_u8g2_1bpp.c
#gcc -o lcd_fixedsize_lvgl_1bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1  -DCONFIG_FONT_ENC=3 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freemono24_fixedsize_lvgl_1bpp.c

# var size, 1bpp
gcc -o lcd_varsize_raw_1bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freesans32_varsize_raw_1bpp.c
gcc -o lcd_varsize_rawbb_1bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freesans32_varsize_rawbb_1bpp.c
#gcc -o lcd_varsize_u8g2_1bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=2 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freesans32_varsize_u8g2_1bpp.c
#gcc -o lcd_varsize_lvgl_1bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=3 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freesans32_varsize_lvgl_1bpp.c

# fixed width and height, 2bpp
gcc -o lcd_fixedsize_raw_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freemono24_fixedsize_raw_2bpp.c
gcc -o lcd_fixedsize_rawbb_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freemono24_fixedsize_rawbb_2bpp.c
#gcc -o lcd_fixedsize_u8g2_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_ENC=2 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freemono24_fixedsize_u8g2_2bpp.c
#gcc -o lcd_fixedsize_lvgl_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_ENC=3 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freemono24_fixedsize_lvgl_2bpp.c

# var size, 2bpp
gcc -o lcd_varsize_raw_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freesans32_varsize_raw_2bpp.c
gcc -o lcd_varsize_rawbb_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freesans32_varsize_rawbb_2bpp.c
#gcc -o lcd_varsize_u8g2_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=2 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freesans32_varsize_u8g2_2bpp.c
#gcc -o lcd_varsize_lvgl_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=3 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freesans32_varsize_lvgl_2bpp.c

# test var size, 2bpp with UTF-8 characters
gcc -o lcd_varsize_rawbb_2bpp_utf8 -DTEST_UTF8=1 -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c microhei32_varsize_rawbb_2bpp.c
