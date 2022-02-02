#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "red_blink.h"
#include "../include/colors.h"


int red_blink() {
    printf("Activated Blink Mode for " BOLD RED "Red LED" RESET " (led1)\n");

    while(1) {
        char *red_blink_on = "echo 1 > /sys/class/leds/led1/brightness";
        system(red_blink_on);
        sleep(1);   
        char *red_blink_off = "echo 0 > /sys/class/leds/led1/brightness";
        system(red_blink_off);
        sleep(1);   
    }

    char *red_blink_on = "echo 1 > /sys/class/leds/led1/brightness";
    system(red_blink_on);

    return 0;
}
