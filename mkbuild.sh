#!/bin/bash

COMMAND="gcc -Wall *.h *.c include/*.h led1/*.h led1/*.c led0/*.h led0/*.c -o ledcontrol"

echo "Compiling led1/activate_red.c"
sleep 0.2
echo "Compiling led1/activate_red.h"
sleep 0.21
echo "Compiling led1/deactivate_red.c"
sleep 0.34
echo "Compiling led1/deactivate_red.h"
sleep 0.22
echo "Compiling led1/red_blink.c"
sleep 0.31
echo "Compiling led1/red_blink.h"
sleep 0.20
echo "Compiling led1/red_blink_fast.c"
sleep 0.31
echo "Compiling led1/red_blink_fast.h"
sleep 0.199
echo "Compiling led1/red_blink_slow.c"
sleep 0.35
echo "Compiling led1/red_blink_slow.h"
sleep 0.19

echo "Compiling led0/activate_green.c"
sleep 0.20
echo "Compiling led0/activate_green.h"
sleep 0.199
echo "Compiling led0/deactivate_green.c"
sleep 0.32
echo "Compiling led0/deactivate_green.h"
sleep 0.221
echo "Compiling led0/green_blink.c"
sleep 0.31
echo "Compiling led0/green_blink.h"
sleep 0.19
echo "Compiling led0/green_blink_fast.c"
sleep 0.31
echo "Compiling led0/green_blink_fast.h"
sleep 0.19
echo "Compiling led0/green_blink_slow.c"
sleep 0.33
echo "Compiling led0/green_blink_slow.h"
sleep 0.19

echo "Compiling help.c"
sleep 0.42
echo "Compiling help.h"
sleep 0.35
echo "Compiling main.c"
sleep 0.57
echo "Compiling version.c"
sleep 0.2
echo "Compiling version.h"
sleep 0.1
echo "Compiling include/colors.h"
sleep 0.1
echo "Compiling include/build_config.h"
sleep 0.3

echo "Linking compilied sources to ledcontrol..."
$COMMAND
echo "Finished"