#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "led1/activate_red.h"
#include "led1/deactivate_red.h"
#include "led1/red_blink.h"
#include "led1/red_blink_fast.h"
#include "led1/red_blink_slow.h"

#include "led0/activate_green.h"
#include "led0/deactivate_green.h"
#include "led0/green_blink.h"
#include "led0/green_blink_fast.h"
#include "led0/green_blink_slow.h"

#include "leds/blink_all_sync.h"
#include "leds/blink_all_switch.h"

#include "ledmap.h"

#include "help.h"
#include "version.h"
#include "msleep.h"



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

    else if ((!strcmp(argv[1], "red-blink-slow") && argc == 2) || (!strcmp(argv[1], "rbs") && argc == 2))
        return red_blink_slow();
    
    else if ((!strcmp(argv[1], "red-blink-fast") && argc == 2) || (!strcmp(argv[1], "rbf") && argc == 2))
        return red_blink_fast();
    


    else if ((!strcmp(argv[1], "activate-green") && argc == 2) || (!strcmp(argv[1], "ag") && argc == 2))
        return activate_green();
    
    else if ((!strcmp(argv[1], "deactivate-green") && argc == 2) || (!strcmp(argv[1], "dg") && argc == 2))
        return deactivate_green();
    
    else if ((!strcmp(argv[1], "green-blink") && argc == 2) || (!strcmp(argv[1], "gb") && argc == 2))
        return green_blink();

    else if ((!strcmp(argv[1], "green-blink-slow") && argc == 2) || (!strcmp(argv[1], "gbs") && argc == 2))
        return green_blink_slow();
    
    else if ((!strcmp(argv[1], "green-blink-fast") && argc == 2) || (!strcmp(argv[1], "gbf") && argc == 2))
        return green_blink_fast();


    else if ((!strcmp(argv[1], "blink-all-sync") && argc == 2) || (!strcmp(argv[1], "bas") && argc == 2))
        return blink_all_sync();

    else if ((!strcmp(argv[1], "blink-all-switch") && argc == 2) || (!strcmp(argv[1], "basw") && argc == 2))
        return blink_all_switch();


    else if ((!strcmp(argv[1], "detect-os") && argc == 2) || (!strcmp(argv[1], "dos") && argc == 2))
        return detect_os();

    
}

