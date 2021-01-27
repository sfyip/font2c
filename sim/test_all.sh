#!/bin/bash

dalay_time=3

sudo ./lcd_sim0_fixedsize
sleep $dalay_time
sudo ./lcd_sim1_fixedsize
sleep $dalay_time
sudo ./lcd_sim2_fixedsize
sleep $dalay_time
sudo ./lcd_sim3_fixedsize
sleep $dalay_time

sudo ./lcd_sim0_varsize
sleep $dalay_time
sudo ./lcd_sim1_varsize
sleep $dalay_time
sudo ./lcd_sim2_varsize
sleep $dalay_time
sudo ./lcd_sim3_varsize
sleep $dalay_time

sudo ./lcd_sim0_fixedsize_2bpp
sleep $dalay_time
sudo ./lcd_sim1_fixedsize_2bpp
sleep $dalay_time
sudo ./lcd_sim2_fixedsize_2bpp
sleep $dalay_time
#sudo ./lcd_sim3_fixedsize_2bpp
#sleep $dalay_time

sudo ./lcd_sim0_varsize_2bpp
sleep $dalay_time
#sudo ./lcd_sim1_varsize_2bpp
#sleep $dalay_time
sudo ./lcd_sim2_varsize_2bpp
sleep $dalay_time
#sudo ./lcd_sim3_varsize
#sleep $dalay_time

