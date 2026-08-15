// Error case where variable and macro names are same

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here
#define VAR_SIZE (10)

// Add global variables here

// Add function declaration here

int main(void)
{
    // Add line of code here
    int VAR_SIZE = 5; // Variable name same as macro is not allowed
    printf("Value of variable VAR_SIZE: %d\n", VAR_SIZE);
    printf("Value of macro VAR_SIZE: %d\n", VAR_SIZE);
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc d4_variable_name_same_as_macro.c
    d4_variable_name_same_as_macro.c: In function ‘main’:
    d4_variable_name_same_as_macro.c:8:18: error: expected identifier or ‘(’ before numeric constant
        8 | #define VAR_SIZE 10
        |                  ^~
    d4_variable_name_same_as_macro.c:17:9: note: in expansion of macro ‘VAR_SIZE’
    17 |     int VAR_SIZE = 5; // Variable name same as macro
        | */