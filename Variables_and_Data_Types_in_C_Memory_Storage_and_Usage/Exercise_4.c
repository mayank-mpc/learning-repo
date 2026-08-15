// Multiple definations of same variable in main function, user defined funtion, and global scope

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add global variables here
int global_var = 10;

// Add function declaration here
void example_function(void)
{
    int global_var = 20; // Local variable with the same name
    printf("Local variable in function: %d\n", global_var);
}


int main(void)
{
    // Add line of code here
    int global_var = 30; // Local variable in main with the same name
    printf("Local variable in main: %d\n", global_var);
    printf("Global variable: %d\n", global_var); // Accessing the global variable
    example_function();
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc d4_variable_same_name_everywhere.c -o program
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
Local variable in main: 30
Global variable: 30
Local variable in function: 20*/