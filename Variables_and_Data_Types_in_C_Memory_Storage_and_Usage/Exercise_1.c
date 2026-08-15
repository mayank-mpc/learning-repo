// Multiple variable definations across the program within curly braces

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
            {
                int global_var = 25; // Innermost local variable with the same name
                printf("Innermost local variable value: %d\n", global_var);
                {
                    int global_var = 35; // Innermost block variable with the same name
                    printf("Innermost block variable value: %d\n", global_var);
                }
            }
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
    {
        int global_var = 40; // Block variable in main with the same name
        printf("Main function block variable value: %d\n", global_var);
    }
    example_function();
    return 0;
}

/* Output:
Output

Main function local variable value: 30
Main function block variable value: 40
Local variable value: 20
Innermost local variable value: 25
Innermost block variable value: 35*/