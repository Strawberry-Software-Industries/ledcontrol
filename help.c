#include <stdio.h>
#include <string.h>

#include "include/colors.h"
#include "help.h"

int help() {
    printf(BOLD LIGHT_CYAN"l" GREEN "e" YELLOW "d" BLUE "c" MAGENTA "o" CYAN "n" LIGHT_BLUE "t" RED "r" LIGHT_GREEN "o" LIGHT_MAGENTA "l" RESET BOLD " - LED controller for the Raspberry Pi\n");
    printf("************************************************\n" RESET);
    printf(BOLD MAGENTA "Usage: " RESET WHITE "ledcontrols" CYAN BOLD " [command] " RED "[<options>]\n" RESET);
    printf(BOLD LIGHT_BLUE "Commands:\n" RESET);
    printf(BOLD LIGHT_BLUE "    Basics\n");
    printf(BOLD CYAN "     help [--help]: " RESET "Displays this information\n");
    printf(BOLD CYAN "     version [--version | ver]: " RESET "Displays ledcontrols version information\n\n");
    printf(BOLD RED  "    Red LED\n");
    printf(BOLD CYAN "     activate-red [ar]: " RESET "Activates Red LED (LED1)\n");
    printf(BOLD CYAN "     deactivate-red [dr]: " RESET "Deactivates Red LED (LED1)\n");
    printf(BOLD CYAN "     red-blink [rb]: " RESET "Blinks Red LED (LED1)\n");
    printf(BOLD CYAN "     red-blink-slow [rbs]: " RESET "Blinks Red LED in Slow Mode (LED1)\n");
    printf(BOLD CYAN "     red-blink-fast [rbf]: " RESET "Blinks Red LED in Fast Mode (LED1)\n\n");
    printf(BOLD GREEN"    Green LED\n");
    printf(BOLD CYAN "     activate-green [ag]: " RESET "Activates Green LED (LED0)\n");
    printf(BOLD CYAN "     deactivate-green [dg]: " RESET "Deactivates Green LED (LED0)\n");
    printf(BOLD CYAN "     green-blink [gb]: " RESET "Blinks Green LED (LED0)\n");
    printf(BOLD CYAN "     green-blink-slow [gbs]: " RESET "Blinks Green LED in Slow Mode (LED0)\n");
    printf(BOLD CYAN "     green-blink-fast [gbf]: " RESET "Blinks Green LED Fast Mode (LED0)\n\n");
    printf(BOLD YELLOW "    All LEDs\n");
    printf(BOLD CYAN "     blink-all-sync [bas]: " RESET "Blinks Red and Blue LED in Sync Mode (LED0/LED1)\n");
    printf(BOLD CYAN "     blink-all-switch [basw]: " RESET "Blinks Red and Blue LED in Switch Mode (LED0/LED1)\n\n");
    printf(BOLD LIGHT_MAGENTA "    Settings\n");
    printf(BOLD CYAN "     --config [conf]: " RESET "ledcontrol config\n");


    
    return 0;
}