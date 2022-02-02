#include <stdlib.h>
#include <stdio.h>

#include "deactivate_green.h"

int deactivate_green() {
    char *red_on = "echo 0 > /sys/class/leds/led0/brightness";
    system(red_on);

    return 0;
}