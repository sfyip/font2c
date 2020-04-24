# font2c
A python script which convert font to C array, target for embedded system (e.g. LCD Controller ILI9806)

Prerequisite: Python3<br/>
Additional Python Library: PIL

Output sequence: Left to right, down to bottom sequentially


| Configuration | Description |
| --- | --- |
| font = "arial" | font style |
| size = 80 | font size |
| text = "0123456789:"            | output which symbol |
| offset = (0,0)                  | x,y offset |
| max_width = 83                  | maximum width |
| compress_lv = 1                 | compress level (0=no compress, 1=compress) |
| export_dir = "./export/"        | export directory |
| c_filename = font + str(size)   | generated c source file name |
