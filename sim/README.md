# font2c simulator

A simple LCD simulator is designed to test the generated font characters.
This program accesses the framebuffer color pixels directly via /dev/fb0 on Linux (sudo permission is required). It has been tested on Ubuntu 22.04.

Procedure:
1) Execute ./build.sh to build the test programs
2) In Ubuntu, press [Ctrl + Alt + F3] to open a new console
3) sudo ./test_all.sh
