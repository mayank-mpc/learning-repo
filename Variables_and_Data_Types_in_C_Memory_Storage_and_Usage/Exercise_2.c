// Multiple variable definations across the program within main function, user defined, function and globally

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add global variables here
int global_var = 45;

// Add function declaration here
void example_function(void)
{
    int global_var = 10; // Local variable with the same name as global variable
    switch (global_var)
    {
        case 10:
            int global_var = 20; // Another local variable with the same name
            printf("Local variable value: %d\n", global_var);
            break;
        default:
            printf("Default case\n");
            break;
    }
}

int main(void)
{
    // Add line of code here
    int global_var = 30; // Local variable in main with the same name
    printf("Main function local variable value: %d\n", global_var);
    example_function();
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc d4_variable_declaration_is_same.c -o program
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
Main function local variable value: 30
Local variable value: 20*/