# font2c simulator

A simple LCD simulator aims at testing the generated font characters.
This program used Linux /dev/fb0 to access the framebuffer color pixel directly (sudo premission is required).<br/>
Tested in Ubuntu 20.04

Procedure:
1) Execute ./build.sh to build the test programs
2) In Ubuntu, press [Ctrl + Alt + F3] to open a new console
3) sudo ./test_all.sh
