#!/bin/bash

# Simple LCD simulator by using Linux /dev/fb0 to direct access the color pixel
# Tested in Ubuntu 18.04
# Procedure:
# 1) In Ubuntu, press [Ctrl + Alt + F2] to open a new native console
# 2) sudo ./lcd_sim

gcc -o lcd_sim0 -DCONFIG_FONT_ENC=0 main.c lcd_sim.c freemono24_enc0.c
gcc -o lcd_sim1 -DCONFIG_FONT_ENC=1 main.c lcd_sim.c freemono24_enc1.c
gcc -o lcd_sim2 -DCONFIG_FONT_ENC=2 main.c lcd_sim.c freemono24_enc2.c
gcc -o lcd_sim3 -DCONFIG_FONT_ENC=3 main.c lcd_sim.c freemono24_enc3.c
