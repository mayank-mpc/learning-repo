// Example for lifetime of static variables

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add global variables here

// Add function declaration here
void function(void)
{
    static int variable = 0; // Locally static variable
    variable++;
    printf("The value of variable in function is %d\n", variable);
}

int main(void)
{
    // Add line of code here
    function();
    function();
    function();
    return 0;
}

/* Output:
Output

mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc Exercise_3.c -o program
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
The value of variable in function is 1
The value of variable in function is 2
The value of variable in function is 3*/