// Example of shadowing global variable within function

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add global variables here
int value = 10;

// Add function declaration here
int function(int value)
{
    printf("Function parameter value: %d\n", value);
    {
        // Shadowing the function parameter with a local variable
        int value = 20;
        printf("Local variable value: %d\n", value);
    }
}

int main(void)
{
    // Add line of code here
    function(5);
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
Function parameter value: 5
Local variable value: 20*/