#include <stdio.h>
#include <string.h>

#include "include/colors.h"
#include "include/build_config.h"
#include "version.h"

int version() {
    printf(RED BOLD "ledcontrol " RESET BOLD GREEN VERSION RESET "\n");
    printf(BOLD RED "Build " RESET BOLD YELLOW BUILD_DATE RESET "\n");
    printf(BOLD CYAN "Copyright (C) 2022 Strawberry Software Industries\n" RESET);
    printf(BOLD "This program comes with absolutely " UNDERLINE "NO" RESET BOLD " warranty\n");
    return 0;
}