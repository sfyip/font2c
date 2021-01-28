#!/bin/bash

# Simple LCD simulator by using Linux /dev/fb0 to direct access the color pixel
# Tested in Ubuntu 18.04

# fixed width and height, 1bpp
gcc -o lcd_sim0_fixedsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_MARGIN=0 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freemono24_fixedsize_nomargin_raw.c
gcc -o lcd_sim1_fixedsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_MARGIN=0 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freemono24_fixedsize_nomargin_rle.c
gcc -o lcd_sim2_fixedsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_MARGIN=1 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freemono24_fixedsize_margin_raw.c
gcc -o lcd_sim3_fixedsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_MARGIN=1 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freemono24_fixedsize_margin_rle.c

# var size, 1bpp
gcc -o lcd_sim0_varsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_MARGIN=0 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freesans32_varsize_nomargin_raw.c
gcc -o lcd_sim1_varsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_MARGIN=0 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freesans32_varsize_nomargin_rle.c
gcc -o lcd_sim2_varsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_MARGIN=1 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freesans32_varsize_margin_raw.c
gcc -o lcd_sim3_varsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_MARGIN=1 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freesans32_varsize_margin_rle.c


# fixed width and height, 2bpp
gcc -o lcd_sim0_fixedsize_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_MARGIN=0 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freemono24_fixedsize_nomargin_raw_2bpp.c
gcc -o lcd_sim1_fixedsize_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_MARGIN=0 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freemono24_fixedsize_nomargin_rle_2bpp.c
gcc -o lcd_sim2_fixedsize_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_MARGIN=1 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freemono24_fixedsize_margin_raw_2bpp.c
gcc -o lcd_sim3_fixedsize_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_MARGIN=1 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freemono24_fixedsize_margin_rle_2bpp.c

# var size, 2bpp
gcc -o lcd_sim0_varsize_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_MARGIN=0 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freesans32_varsize_nomargin_raw_2bpp.c
gcc -o lcd_sim1_varsize_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_MARGIN=0 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freesans32_varsize_nomargin_rle_2bpp.c
gcc -o lcd_sim2_varsize_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_MARGIN=1 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freesans32_varsize_margin_raw_2bpp.c
gcc -o lcd_sim3_varsize_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_MARGIN=1 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freesans32_varsize_margin_rle_2bpp.c

# test var size, 2bpp with UTF-8 characters
gcc -o lcd_sim3_varsize_2bpp_utf8 -DTEST_UTF8=1 -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_MARGIN=1 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c microhei32_varsize_margin_rle_2bpp.c
