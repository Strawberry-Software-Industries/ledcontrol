#include <stdio.h>
#include <string.h>

#include "include/colors.h"
#include "help.h"

int help() {
    printf(BOLD LIGHT_CYAN"l" GREEN "e" YELLOW "d" BLUE "c" MAGENTA "o" CYAN "n" LIGHT_BLUE "t" RED "r" LIGHT_GREEN "o" LIGHT_MAGENTA "l" RESET BOLD " - LED controller for the Raspberry Pi\n");
    printf("************************************************\n" RESET);
    printf(BOLD MAGENTA "Usage: " RESET WHITE "ledcontrols" CYAN BOLD " [command] " RED "[<options>]\n" RESET);
    printf(BOLD LIGHT_BLUE "Commands:\n" RESET);
    printf(BOLD CYAN "     help [--help]: " RESET "Displays this information\n");
    printf(BOLD CYAN "     version [--version | ver]: " RESET "Displays ledcontrols version information\n");
    printf(BOLD CYAN "     activate-red [ar]: " RESET "Activates Red LED (LED1)\n");
    printf(BOLD CYAN "     deactivate-red [dr]: " RESET "Deactivates Red LED (LED1)\n");
    printf(BOLD CYAN "     red-blink [rb]: " RESET "Blinks Red LED (LED1)\n\n");
    printf(BOLD CYAN "     activate-green [ag]: " RESET "Activates Green LED (LED0)\n");
    printf(BOLD CYAN "     deactivate-green [dg]: " RESET "Deactivates Green LED (LED0)\n");
    printf(BOLD CYAN "     green-blink [gb]: " RESET "Blinks Green LED (LED0)\n\n");
    printf("\n");
    printf(BOLD RED "W: The functions for led0 (green) may not work correctly. Be patient until a new build is released\n" RESET);
    
    return 0;
}