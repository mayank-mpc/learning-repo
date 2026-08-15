// Example of global declaration and function variable preference in this scenario

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add global variables here
static int variable = 50; // Static global variable

// Add function declaration here
int* function(void)
{
    return &variable; // Return address of static global variable
}

int main(void)
{
    // Add line of code here
    static int variable = 30; // Static variable declared in main function
    printf("The value of variable in main function is %d\n", variable);
    printf("The value of static global variable returned by function is %d\n", *function());
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc Exercise_2.c -o program
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
The value of variable in main function is 30
The value of static global variable returned by function is 50*/