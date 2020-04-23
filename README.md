# font2c
A python script which can convert font to C array for embedded system (LCD Controller)

Prerequisite: Python3

Output sequence: Left to right, top to bottom


| Configuration | Description |
| --- | --- |
| font = "arial" | font style |
| size = 80 | font size |
| text = "0123456789:"            | output whcih symbol |
| offset = (0,0)                  | x,y offset |
| compress_lv = 1                 | compress level (0=no compress, 1=compress) |
| c_filename = font + str(size)   | generated c source file name |
