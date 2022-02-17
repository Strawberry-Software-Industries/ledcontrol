#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "ledmap.h"
#include "include/colors.h"


int detect_os() {

 FILE* ptr;
    char ch;
    ptr = fopen("/proc/device-tree/model", "r");
  
    while (!feof(ptr)) {
        ch = fgetc(ptr);
        printf("%c", ch);
        
    }
    printf("\n");
    fclose(ptr);

  return 0;
}

  /* printf(YELLOW "WARNING: " RESET "You are in Developer Mode!\n");
  printf("");
  char *model = "tr -d '/0' < /proc/device-tree/model";
  system(model);
  system("if [[ $MODEL =~ 'Raspberry Pi 4' ]]; then echo 'Youre running this Script on a Pi 4'; elif [[ $MODEL  =~ 'Raspberry Pi 3 ' ]]; then echo 'Youre running this Script on a Pi 3'; fi");
  printf("\n"); */