#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "deactivate_red.h"
#include "../include/colors.h"

int deactivate_red() {
    char *red_off = "echo 0 > /sys/class/leds/led1/brightness";
    system(red_off);
    printf("Deactivated " BOLD RED "Red LED" RESET " (led1)\n");

    return 0;
}