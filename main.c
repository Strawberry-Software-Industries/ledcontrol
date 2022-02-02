#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "led1/activate_red.h"
#include "led1/deactivate_red.h"
#include "led1/red_blink.h"
#include "led0/deactivate_green.h"
#include "led0/deactivate_green.h"

#include "help.h"
#include "version.h"

#include "led0/green_blink.h"

int main(int argc, char* argv[]) {
    if (argc == 1)
        help();

    else if ((!strcmp(argv[1], "help") && argc == 2) || (!strcmp(argv[1], "--help") && argc == 2))
        return help();

    else if ((!strcmp(argv[1], "version") && argc == 2) || (!strcmp(argv[1], "--version") && argc == 2) || (!strcmp(argv[1], "ver") && argc == 2))
        return version();

    else if ((!strcmp(argv[1], "activate-red") && argc == 2) || (!strcmp(argv[1], "ar") && argc == 2))
        return activate_red();
    
    else if ((!strcmp(argv[1], "deactivate-red") && argc == 2) || (!strcmp(argv[1], "dr") && argc == 2))
        return deactivate_red();

    else if ((!strcmp(argv[1], "red-blink") && argc == 2) || (!strcmp(argv[1], "rb") && argc == 2))
        return red_blink();
    
    else if ((!strcmp(argv[1], "green-blink") && argc == 2) || (!strcmp(argv[1], "gb") && argc == 2))
        return green_blink();
}

