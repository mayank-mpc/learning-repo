// Error case for switch case where the local variable inside a case can be redeclared in another case. To resolve need to use braces inside the case as well when declaring variables.

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
    switch (1) {
        case 1:
        {
            int x = 10;
            printf("Case 1: x = %d\n", x);
        }

        case 2:
        {
            int x = 20;
            printf("Case 2: x = %d\n", x);
        }

        default: {
            int x = 30;
            printf("Default case: x = %d\n", x);
            break;
        }
    }
    return 0;
}

// Error case when braces are removed in case 1 and 2
// mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc Exercise_8.c -o program
// Exercise_8.c: In function ‘main’:
// Exercise_8.c:22:17: error: redefinition of ‘x’
//    22 |             int x = 20;
//       |                 ^
// Exercise_8.c:18:17: note: previous definition of ‘x’ with type ‘int’
//    18 |             int x = 10;
//       |                 ^

// Corrected case
// mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc Exercise_8.c -o program
// mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
// Case 1: x = 10
// Case 2: x = 20
// Default case: x = 30