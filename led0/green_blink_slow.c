#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "green_blink_slow.h"
#include "../include/colors.h"


int green_blink_slow() {
    printf("Activated Slow Blink Mode for " BOLD GREEN "Green LED" RESET " (led0)\n");

    while(1) {
        char *red_blink_slow_on = "echo 1 > /sys/class/leds/led0/brightness";
        system(red_blink_slow_on);
        sleep(2);   
        char *red_blink_slow_off = "echo 0 > /sys/class/leds/led0/brightness";
        system(red_blink_slow_off);
        sleep(2);   
    }

    char *red_blink_slow_on = "echo 1 > /sys/class/leds/led0/brightness";
    system(red_blink_slow_on);

    return 0;
}
