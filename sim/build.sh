#!/bin/bash

# Simple LCD simulator by using Linux /dev/fb0 to direct access the color pixel
# Tested in Ubuntu 18.04
# Procedure:
# 1) In Ubuntu, press [Ctrl + Alt + F3] to open a new native console
# 2) sudo ./lcd_sim

# fixed width and height
gcc -o lcd_sim0_fixedsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_MARGIN=0 -DCONFIG_FONT_ENC=0 main.c lcd_sim.c freemono24_fixedsize_nomargin_raw.c
gcc -o lcd_sim1_fixedsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_MARGIN=0 -DCONFIG_FONT_ENC=1 main.c lcd_sim.c freemono24_fixedsize_nomargin_rle.c
gcc -o lcd_sim2_fixedsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_MARGIN=1 -DCONFIG_FONT_ENC=0 main.c lcd_sim.c freemono24_fixedsize_margin_raw.c
gcc -o lcd_sim3_fixedsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_MARGIN=1 -DCONFIG_FONT_ENC=1 main.c lcd_sim.c freemono24_fixedsize_margin_rle.c

# flexible font size
gcc -o lcd_sim0_varsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_MARGIN=0 -DCONFIG_FONT_ENC=0 main.c lcd_sim.c freesans32_varsize_nomargin_raw.c
gcc -o lcd_sim1_varsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_MARGIN=0 -DCONFIG_FONT_ENC=1 main.c lcd_sim.c freesans32_varsize_nomargin_rle.c
gcc -o lcd_sim2_varsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_MARGIN=1 -DCONFIG_FONT_ENC=0 main.c lcd_sim.c freesans32_varsize_margin_raw.c
gcc -o lcd_sim3_varsize -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_MARGIN=1 -DCONFIG_FONT_ENC=1 main.c lcd_sim.c freesans32_varsize_margin_rle.c