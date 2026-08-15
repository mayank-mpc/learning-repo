// Error case where function and variable name are same in global scope

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add global variables here

// Add function declaration here

/* First Scenario: Function and variable with the same name ( Working )*/
// void variable_1(void);

// int main(void)
// {
//     // Add line of code here
//     int variable_1 = 10; // Variable with the same name as the declared function
//     printf("Variable value: %d\n", variable_1);
//     return 0;
// }

/* Second Scenario: Function and variable with the same name ( Not Working )*/
void variable_1(void);

int variable_1 = 10; // Variable with the same name as the declared function is not allowed

int main(void)
{
    // Add line of code here
    printf("Variable value: %d\n", variable_1);
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc d4_variable_name_same_as_declared_function.c -o program
    d4_variable_name_same_as_declared_function.c:26:5: error: ‘variable_1’ redeclared as different kind of symbol
    26 | int variable_1 = 10; // Variable with the same name as the declared function
        |     ^~~~~~~~~~
    d4_variable_name_same_as_declared_function.c:25:6: note: previous declaration of ‘variable_1’ with type ‘void(void)’
    25 | void variable_1(void);
        |   */
