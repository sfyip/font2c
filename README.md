# font2c
A python script that converts font to C array, target for embedded systems (e.g. LCD Controller ILI9806)

Prerequisite: Python3<br/>
Additional Python Library: Pillow (PIL fork)<br/>
Usage:<br/>
 - Load the font properties from config file: python3 font2c.py font_config.ini<br/>
 - Use default setting: python3 font2c.py

Output sequence: Left to right, down to bottom sequentially

#### Preview:
![Preview Screen Capture](img/screen_cap.png)

| Configuration | Description |
| --- | --- |
| font = /usr/share/fonts/truetype/freefont/FreeSans.ttf | font style (Tested on Windows platform: cour)|
| size = 32 | font size |
| text = 0123456789:<br/>abcdefghijklmnopqrstuvwxyz<br/>ABCDEFGHIJKLMNOPQRSTUVWXYZ | output characters |
| offset = (0,0)                  | x,y offset |
| fixed_width_height = None       | None: Flexible size<br/>(width, height): Fixed width and height | 
| max_width = 32                  | maximum width |
| calc_margin = true              | calculate margin area |
| encoding_method = raw | encoding method<br/>raw=direct dump the pixels inside margin area<br/>rle=RLE compression, accumulate numbers of 0 and 1 in nibble size inside margin area<br/> |
| template_file_path = ['./template_bmp.ini', <br/>'./template_font_table_width_height_margin_index.ini'] | template file path |
| export_dir = ./export/          | export directory |

**Example 1: Output with fixed width and height, calc_margin set to true, encoding method set to raw, use template_bmp.ini and template_font_table_margin_index.ini as template files, the generated c source file and preview font images are placed under './export' directory**
```python
    font = "cour"                           # font style (Test chinese font: kaiu)
    size = 24                               # font size
    text = "0123456789:"                \
           "abcdefghijklmnopqrstuvwxyz" \
           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"     # "測試間距テスト"  # output which symbol
    offset = (0,0)                          # x,y offset
    fixed_width_height = (14,24)            # fixed width and height
    max_width = 24                          # maximum width
    calc_margin = true                      # calculate margin area
    encoding_method = raw                   # encoding method
                                            # raw: direct dump the pixels inside margin area
                                            # rle: RLE compression, accumulate numbers of 0 and 1 in nibble size inside margin area
    template_file_path = ['./template_bmp.ini', './template_font_table_margin_index.ini'] # template file path
    export_dir = "./export/"                # export directory
```

**Example 2: Output with flexible font size, calc_margin set to true, encoding method set to raw, use template_bmp.ini and template_font_table_width_height_margin_index.ini as template files, the generated c source file and preview font images are placed under './export' directory**
```python
    font = "arial"                          # font style (Test chinese font: kaiu)
    size = 32                               # font size
    text = "0123456789:"                \
           "abcdefghijklmnopqrstuvwxyz" \
           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"     # "測試間距テスト"  # output which symbol
    offset = (0,0)                          # x,y offset
    fixed_width_height = None               # adaptive width and height
    max_width = 32                          # maximum width
    calc_margin = true                      # calculate margin area
    encoding_method = raw                   # encoding method
                                            # raw: direct dump the pixels inside margin area
                                            # rle: RLE compression, accumulate numbers of 0 and 1 in nibble size inside margin area
    template_file_path = ['./template_bmp.ini', './template_font_table_width_height_margin_index.ini']# template file path
    export_dir = './export/'                # export directory
```
