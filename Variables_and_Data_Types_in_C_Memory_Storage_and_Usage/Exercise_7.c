// Error case where redeclared same variable with different data type

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add global variables here

// Add function declaration here

int main(void)
{
    // Add line of code here
    int sum = 12;
    float sum = 105.5; // Redeclaration of variable with different data type is not allowed

    printf("Sum: %f\n", sum);

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc d4_variable_redeclaration_with_different_data_type.c -o program
   d4_variable_redeclaration_with_different_data_type.c: In function ‘main’:
   d4_variable_redeclaration_with_different_data_type.c:17:11: error: conflicting types for ‘sum’; have ‘float’
      17 |     float sum = 105.5; // Redeclaration with different data type
         |           ^~~
   d4_variable_redeclaration_with_different_data_type.c:16:9: note: previous definition of ‘sum’ with type ‘int’
      16 |     int sum = 12;
         |*/