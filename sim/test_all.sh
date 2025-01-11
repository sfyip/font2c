#!/bin/bash

echo "In ubuntu, press ctrl+alt+f3 to switch to complete terminal mode to write the string directly on framebuffer"
echo "You could press ctrl+alt+f2 to switch back to desktop environment anytime"

if [ -z "$DISPLAY" ] && [ -t 0 ]; then
    echo "Running in console."
else
    echo "Not running in console (possibly in X Windows or Wayland)."
    exit 1
fi

dalay_time=3

sudo ./lcd_fixedsize_raw_1bpp
sleep $dalay_time
sudo ./lcd_fixedsize_rawbb_1bpp
sleep $dalay_time
sudo ./lcd_fixedsize_lvgl_1bpp
sleep $dalay_time

sudo ./lcd_varsize_raw_1bpp
sleep $dalay_time
sudo ./lcd_varsize_rawbb_1bpp
sleep $dalay_time
sudo ./lcd_varsize_lvgl_1bpp
sleep $dalay_time

sudo ./lcd_fixedsize_raw_2bpp
sleep $dalay_time
sudo ./lcd_fixedsize_rawbb_2bpp
sleep $dalay_time
sudo ./lcd_fixedsize_lvgl_2bpp
sleep $dalay_time

sudo ./lcd_varsize_raw_2bpp
sleep $dalay_time
sudo ./lcd_varsize_rawbb_2bpp
sleep $dalay_time
sudo ./lcd_varsize_lvgl_2bpp
sleep $dalay_time

sudo ./lcd_varsize_rawbb_2bpp_utf8
sleep $dalay_time
