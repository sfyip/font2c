# font2c
A python script which convert font to C array, target for embedded system (e.g. LCD Controller ILI9806)

Prerequisite: Python3<br/>
Additional Python Library: PIL

Output sequence: Left to right, down to bottom sequentially


| Configuration | Description |
| --- | --- |
| font = "cour" | font style |
| size = 24 | font size |
| text = "0123456789:" | output which symbol |
| offset = (0,0)                  | x,y offset |
| fixed_width_height              | None: Size is adaptive<br />(width, height): Fixed width and height | 
| max_width = 24                  | maximum width |
| encoding_method = 0                 | encoding method<br/>0=direct dump the pixels<br/>1=accumulate numbers of 0 and 1<br/>2=direct dump the pixels inside the margin area <br/>3=accumulate numbers of 0 and 1 inside the margin area |
| template_file_path = "./template.txt" | template file path |
| export_dir = "./export/"        | export directory |
| c_filename = font + str(size)   | generated c source file name |


**Example 1: Output with fixed width and height, encoding method set to 0, use template.txt as template file**
```python
    font = "cour"                           # font style (Test chinese font: kaiu)
    size = 24                               # font size
    text = "0123456789:"                \
           "abcdefghijklmnopqrstuvwxyz" \
           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"     # "測試間距テスト"  # output whcih symbol
    offset = (0,0)                          # x,y offset
    fixed_width_height = (14,24)            # fixed width and height
    max_width = 24                          # maximum width
    encoding_method = 0                     # encoding method
                                            # 0=direct dump the pixels
                                            # 1=accumulate numbers of 0 and 1
                                            # 2=direct dump the pixels inside the margin area
                                            # 3=accumulate numbers of 0 and 1 inside the margin area
    template_file_path = "./template.txt"   # template file path
    export_dir = "./export/"                # export directory
    c_filename = font + str(size)           # generated c source file name
```

**Example 2: Output with adaptive width and height, encoding method set to 1, use template2.txt as template file**
```python
    font = "arial"                          # font style (Test chinese font: kaiu)
    size = 80                               # font size
    text = "0123456789:"                \
           "abcdefghijklmnopqrstuvwxyz" \
           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"     # "測試間距テスト"  # output whcih symbol
    offset = (0,0)                          # x,y offset
    fixed_width_height = None               # fixed width and height
    max_width = 83                          # maximum width
    encoding_method = 1                     # encoding method
                                            # 0=direct dump the pixels
                                            # 1=accumulate numbers of 0 and 1
                                            # 2=direct dump the pixedls inside the margin area
                                            # 3=accumulate numbers of 0 and 1 inside the margin area
    template_file_path = "./template2.txt"  # template file path
    export_dir = "./export/"                # export directory
    c_filename = font + str(size)           # generated c source file name
```
