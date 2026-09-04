// Assigning log level using the macros along with the Header Guards

#include <stdio.h>

#define DEBUG

#include "debug.h"

int main()
{
    LOG("Initialization Completed !!");

    return 0;
}