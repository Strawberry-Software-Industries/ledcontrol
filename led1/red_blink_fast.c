#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "red_blink_fast.h"
#include "../include/colors.h"
#include "../msleep.h"


int red_blink_fast() {
    printf("Activated Fast Blink Mode for " BOLD RED "Red LED" RESET " (led1)\n");

    while(1) {
        char *red_blink_fast_on = "echo 1 > /sys/class/leds/led1/brightness";
        system(red_blink_fast_on);
        msleep(500);
        char *red_blink_fast_off = "echo 0 > /sys/class/leds/led1/brightness";
        system(red_blink_fast_off);
        msleep(500);
    }

    char *red_blink_fast_on = "echo 1 > /sys/class/leds/led1/brightness";
    system(red_blink_fast_on);

    return 0;
}
