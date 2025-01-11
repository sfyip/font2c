#!/bin/bash

# Simple LCD simulator by using Linux /dev/fb0 to direct access the color pixel
# Tested in Ubuntu 20.04


# Function to build a GCC program with custom arguments
# first argument is output file name
# subsequent argument is the gcc build option
exec_gcc() {
    output_prog=$1
    shift
    gcc -o $output_prog $@

    # Check if the compilation succeeded
    if [[ $? -eq 0 ]]; then
        echo "gcc built $output_prog successful!"
    else
        echo "gcc built $output_prog failed."
        exit 1
    fi
}


# fixed width and height, 1bpp
exec_gcc lcd_fixedsize_raw_1bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freemono24_fixedsize_raw_1bpp.c
exec_gcc lcd_fixedsize_rawbb_1bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freemono24_fixedsize_rawbb_1bpp.c
exec_gcc lcd_fixedsize_lvgl_1bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1  -DCONFIG_FONT_ENC=3 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freemono24_fixedsize_lvgl_1bpp.c

# var size, 1bpp
exec_gcc lcd_varsize_raw_1bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freesans32_varsize_raw_1bpp.c
exec_gcc lcd_varsize_rawbb_1bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freesans32_varsize_rawbb_1bpp.c
exec_gcc lcd_varsize_lvgl_1bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=3 -DCONFIG_BPP=1 main.c lcd_sim.c utf8.c freesans32_varsize_lvgl_1bpp.c

# fixed width and height, 2bpp
exec_gcc lcd_fixedsize_raw_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freemono24_fixedsize_raw_2bpp.c
exec_gcc lcd_fixedsize_rawbb_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freemono24_fixedsize_rawbb_2bpp.c
exec_gcc lcd_fixedsize_lvgl_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=1 -DCONFIG_FONT_ENC=3 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freemono24_fixedsize_lvgl_2bpp.c

# var size, 2bpp
exec_gcc lcd_varsize_raw_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=0 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freesans32_varsize_raw_2bpp.c
exec_gcc lcd_varsize_rawbb_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freesans32_varsize_rawbb_2bpp.c
exec_gcc lcd_varsize_lvgl_2bpp -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=3 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c freesans32_varsize_lvgl_2bpp.c

# test var size, 2bpp with UTF-8 characters
exec_gcc lcd_varsize_rawbb_2bpp_utf8 -DTEST_UTF8=1 -DCONFIG_FONT_FIXED_WIDTH_HEIGHT=0 -DCONFIG_FONT_ENC=1 -DCONFIG_BPP=2 main.c lcd_sim.c utf8.c microhei32_varsize_rawbb_2bpp.c


