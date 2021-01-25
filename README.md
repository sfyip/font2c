# font2c
A python script that converts font to C array, target for embedded systems (e.g. LCD Controller ILI9806)

Prerequisite: Python3<br/>
Additional Python Library: Pillow (PIL fork)<br/>
Usage:<br/>
 - Load the font properties from config file: python3 font2c.py font_config.ini<br/>
 - Use default setting: python3 font2c.py

Output sequence: Left to right, down to bottom sequentially


| Configuration | Description |
| --- | --- |
| font = "cour" | font style |
| size = 24 | font size |
| text = "0123456789:" | output characters |
| offset = (0,0)                  | x,y offset |
| fixed_width_height              | None: Size is adaptive<br />(width, height): Fixed width and height | 
| max_width = 24                  | maximum width |
| calc_margin = False              | calculate margin area |
| encoding_method = raw | encoding method<br/>raw=direct dump the pixels inside margin area<br/>rle=RLE compression, accumulate numbers of 0 and 1 in nibble size inside margin area<br/> |
| template_file_path = ['./template_bmp_fixed_array_size.ini'] | template file path |
| export_dir = "./export/"        | export directory |

**Example 1: Output with fixed width and height, calc_margin set to true, encoding method set to raw, use template_bmp.ini and template_font_table_margin_index as template files**
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

**Example 2: Output with adaptive width and height, calc_margin set to true, encoding method set to raw, use template_bmp.ini and template_font_table_width_height_margin_index.ini as template files**
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
