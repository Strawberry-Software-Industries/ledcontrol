#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "blink_all_switch.h"
#include "../include/colors.h"


int blink_all_switch() {
    printf("Activated Blink Mode for " BOLD RED "Red " RESET "and" BOLD GREEN " Green " RESET "LED" " (led1) in Switch Mode\n");

    while(1) {
        char *green_sync_off = "echo 0 > /sys/class/leds/led0/brightness";
        char *red_sync_on = "echo 1 > /sys/class/leds/led1/brightness";
        system(red_sync_on);
        system(green_sync_off);
        sleep(1);   
        char *red_sync_off = "echo 0 > /sys/class/leds/led1/brightness";
        char *green_sync_on = "echo 1 > /sys/class/leds/led0/brightness";
        system(red_sync_off);
        system(green_sync_on);
        sleep(1);   
    }

    char *red_blink_on = "echo 1 > /sys/class/leds/led1/brightness";
    char *green_blink_off = "echo 0 > /sys/class/leds/led0/brightness";
    system(red_blink_on);
    system(green_blink_off);

    return 0;
}

