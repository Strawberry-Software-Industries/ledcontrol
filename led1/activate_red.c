#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "activate_red.h"
#include "../include/colors.h"

int activate_red() {
    char *red_on = "echo 1 > /sys/class/leds/led1/brightness";
    system(red_on);
    printf("Activated " BOLD RED "Red LED" RESET " (led1)\n");

    return 0;
}