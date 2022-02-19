#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "ledmap.h"
#include "include/colors.h"

int mapper() {
    printf(BOLD LIGHT_CYAN"l" GREEN "e" YELLOW "d" BLUE "c" MAGENTA "o" CYAN "n" LIGHT_BLUE "t" RED "r" LIGHT_GREEN "o" LIGHT_MAGENTA "l" RESET BOLD " - config\n");
    printf("************************************************\n" RESET);
    printf(BOLD LIGHT_BLUE "Commands:\n" RESET);
    printf(BOLD CYAN "     --config-rpi4 [conf-pi4]: " RESET "Activates the recommended settings for Rapsberry Pi 4 devices\n");
    printf(BOLD CYAN "     --config-rpi3 [conf-pi3]: " RESET "Activates the recommended settings for Rapsberry Pi 3 devices\n");
  return 0;
}

int confpi4() {
  config_dir();

    char* model;
    model = "RPi4";

    FILE *fptr;

    fptr = fopen("/home/pi/.config/ledcontrol/ledmap.conf", "w");

    if (fptr == NULL) {
        printf(RED "Error creating Config File!\n");
        exit(1);
    }
    fprintf(fptr, "%s", model);
    fclose(fptr);
    printf("Changed #MODEL_CONFIG to RPi4\n");
    return 0;
}

int confpi3() {
  config_dir();

    char* model;
    model = "RPi3";

    FILE *fptr;

    fptr = fopen("/home/pi/.config/ledcontrol/ledmap.conf", "w");

    if (fptr == NULL) {
        printf(RED "Error creating Config File!\n");
        exit(1);
    }
    fprintf(fptr, "%s", model);
    fclose(fptr);
    printf("Changed #MODEL_CONFIG to RPi3\n");
    return 0;
}

void config_dir() {
  struct stat st = {0};

  if (stat("/home/pi/.config/ledcontrol/", &st) == -1) {
      mkdir("/home/pi/.config/ledcontrol/", 0700);
  }
}