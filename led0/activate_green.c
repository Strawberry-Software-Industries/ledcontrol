#include <stdlib.h>
#include <stdio.h>

#include "activate_green.h"

int activate_green() {
    char *red_on = "echo 1 > /sys/class/leds/led0/brightness";
    system(red_on);

    return 0;
}