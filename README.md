# font2c
A python script that converts font to C array, target for embedded systems (e.g. LCD Controller ILI9806)

![Flow diagram](img/font2c_flow.png)

Prerequisite: Python3<br/>
Additional Python Library: Pillow (PIL fork)<br/>
Usage:<br/>
 - Load the font properties from config file: python3 font2c.py config.ini<br/>
 - Use default setting: python3 font2c.py

Output sequence: Left to right, down to bottom sequentially

#### Preview:
![Preview Screen Capture](img/screen_cap.png)

| Configuration | Description |
|       ---     |     ---     |
| [microhei32_varsize_margin_rle_2bpp] | export C file name                                      |
| bpp = 2                         | bit per pixel ( 1 or 2 ), 2 is smoother but occupy more size |
| font = /usr/share/fonts/truetype/wqy/wqy-microhei.ttc | font style ( True Type Font / Open Font )<br/>(Windows platform: kaiu.ttf) |
| size = 32                       | font size                                                                |
| text = 0123456789:<br/>ABCDEFGHIJKLMNOPQRSTUVWXYZ<br/>abcdefghijklmnopqrstuvwxyz<br/>測試間距テスト | output characters (sorted before export)      |
| offset = (0,0)                  | x,y offset                                                               |
| fixed_width_height = None       | None: Flexible size<br/>(width, height): Fixed width and height          | 
| max_width = 32                  | maximum width                                                            |
| calc_margin = true              | calculate margin area                                                    |
| encoding_method = rle           | encoding method<br/>raw=direct dump the pixels inside margin area<br/>rle=RLE compression, accumulate numbers of 0 and 1 in nibble size inside margin area<br/> |
| export_dir = ./export/          | export directory                                                         |

**Example 1: Output with fixed width and height(14,24), calc_margin set to true, encoding method set to raw, the generated c source file and preview font images are placed under './export' directory**
```python
    font = "cour"                           # font style (Test chinese font: kaiu)
    size = 24
    text = "0123456789:"                \
           "ABCDEFGHIJKLMNOPQRSTUVWXYZ" \
           "abcdefghijklmnopqrstuvwxyz"     # "測試間距テスト"  # output which symbol
    offset = (0,0)
    fixed_width_height = (14,24)            # fixed width and height
    max_width = 24
    calc_margin = true
    encoding_method = raw
    export_dir = "./export/"
```

**Example 2: Output with flexible font size, calc_margin set to true, encoding method set to raw, the generated c source file and preview font images are placed under './export' directory**
```python
    font = "arial"                          # font style (Test chinese font: kaiu)
    size = 32
    text = "0123456789:"                \
           "ABCDEFGHIJKLMNOPQRSTUVWXYZ" \
           "abcdefghijklmnopqrstuvwxyz"     # "測試間距テスト"  # output which symbol
    offset = (0,0)
    fixed_width_height = None               # var_size
    max_width = 32
    calc_margin = true
    encoding_method = raw
    export_dir = './export/'
```
#### Template Keyword Description
| Template keyword      | Description                                 |
|        ---            |     ---                                     |
| ${font}               |  font name option                           |
| ${font_lowercase}     | font name in lowercase                      |
| ${font_uppercase}     | font name in UPPERCASE                      |
| ${size}               | font size option                            |
| ${calc_margin}        | calc_margin option                          |
| ${encoding_method}    | encoding method option                      |
| ${template_file_path} | current template file name                  |
| ${imgname}            | character name                              |
| ${imgname_lowercase}  | character name in lowercase                 |
| ${imgname_uppercase}  | character name in UPPERCASE                 |
| ${codepoint}          | character UTF-8 codepoint                   |
| ${margin_top}         | character margin top                        |
| ${margin_bottom}      | character margin bottom                     |
| ${margin_left}        | character margin left                       |
| ${margin_right}       | character margin right                      |
| ${width}              | character width                             |
| ${height}             | character height                            |
| ${imglen}             | character bmp byte size                     |
| ${bmpdata}            | character bmp data                          |
| ${bmpaddr}            | character bmp index                         |
| ${bpplen}             | character bpp byte size (used only on 2bpp) |
| ${bppdata}            | character bpp data  (used only on 2bpp)     |
| ${bppaddr}            | character bpp index (used only on 2bpp)     |


