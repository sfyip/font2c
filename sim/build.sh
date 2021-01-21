#!/bin/bash

# Simple LCD simulator by using Linux /dev/fb0 to direct access the color pixel
# Tested in Ubuntu 18.04
# Procedure:
# 1) In Ubuntu, press [Ctrl + Alt + F2] to open a new native console
# 2) sudo ./lcd_sim

gcc -o lcd_sim main.c lcd_sim.c cour24.c
