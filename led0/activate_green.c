#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "activate_green.h"
#include "../include/colors.h"

int activate_green() {
    printf("Activated " BOLD GREEN "Green LED" RESET " (led0)\n");
    char *green_on = "echo 1 > /sys/class/leds/led0/brightness";
    system(green_on);

    return 0;
}