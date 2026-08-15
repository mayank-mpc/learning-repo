// Mulitiple defination of variable in main and user defined function

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add function declaration here
void function(void)
{
    int variable = 14; // Varaible declared in the user defined function
    printf("The value of variable in function is %d\n", variable);
}
// Add global variables here

int main(void)
{
    // Add line of code here
    int variable = 34; // Variable declared in main function
    function();
    printf("The value of variable in main function is %d\n", variable);

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc d4_variables_with_same_name.c -o program
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
The value of variable in function is 14
The value of variable in main function is 34*/