#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "deactivate_green.h"
#include "../include/colors.h"

int deactivate_green() {
    printf("Deactivated " BOLD GREEN "Green LED" RESET " (led0)\n");
    char *green_off = "echo 0 > /sys/class/leds/led0/brightness";
    system(green_off);
    

    return 0;
}