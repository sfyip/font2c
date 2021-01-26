#!/bin/bash

sudo ./lcd_sim0_fixedsize
sleep 5
sudo ./lcd_sim1_fixedsize
sleep 5
sudo ./lcd_sim2_fixedsize
sleep 5
sudo ./lcd_sim3_fixedsize
sleep 5

sudo ./lcd_sim0_varsize
sleep 5
sudo ./lcd_sim1_varsize
sleep 5
sudo ./lcd_sim2_varsize
sleep 5
sudo ./lcd_sim3_varsize
sleep 5