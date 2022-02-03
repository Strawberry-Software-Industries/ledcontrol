#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#include "msleep.h"

int msleep(unsigned int tms) {
  return usleep(tms * 1000);
}