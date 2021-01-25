# font2c simulator

A simple LCD simualtor aims for testing the generated font characters.
This program used Linux /dev/fb0 to direct access the framebuffer color pixel (sudo premission is required).
Tested in Ubuntu 18.04

Procedure:
1) Execute ./build.sh to build the test programs
2) In Ubuntu, press [Ctrl + Alt + F3] to open a new console
3) sudo ./lcd_sim0      # font attrib: fixed_width_height, encoding_method:raw, calc-margin:0
4) sudo ./lcd_sim1      # font attrib: fixed_width_height, encoding_method:rle, calc-margin:0
5) sudo ./lcd_sim2      # font attrib: fixed_width_height, encoding_method:raw, calc-margin:1
6) sudo ./lcd_sim3      # font attrib: fixed_width_height, encoding_method:rle, calc-margin:1
7) sudo ./lcd_sim2_flexiblesize      # font attrib: flexible_size, encoding_method:raw, calc-margin:1
8) sudo ./lcd_sim3_flexiblesize      # font attrib: flexible_size, encoding_method:rle, calc-margin:1
