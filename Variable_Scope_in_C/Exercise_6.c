// Example of function parameter scope

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add global variables here

// Add function declaration here
void function(int a, int b)
{
    printf("The sum of %d and %d is %d\n", a, b, a + b);
}

int main(void)
{
    // Add line of code here
    function(12, 23); // Calling function with two parameters
    // printf("The values in function are %d and %d\n", a, b); // error case
    return 0;
}

/* Output:
// Error case where main function tries to access function parameter values
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc Exercise_6.c -o program
Exercise_6.c: In function ‘main’:
Exercise_6.c:21:54: error: ‘a’ undeclared (first use in this function)
   21 |     printf("The values in function are %d and %d\n", a, b);
      |                                                      ^
Exercise_6.c:21:54: note: each undeclared identifier is reported only once for each function it appears in
Exercise_6.c:21:57: error: ‘b’ undeclared (first use in this function)
   21 |     printf("The values in function are %d and %d\n", a, b);
      |

// Correct Output when stopped accessing function parameter
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc Exercise_6.c -o program
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
The sum of 12 and 23 is 35*/