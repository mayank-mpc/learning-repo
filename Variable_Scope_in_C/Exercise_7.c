// Example for scope of loop variables

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
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    // printf("Final value of i: %d\n", i); // This will cause a compilation error
    return 0;
}

// Error case
// mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc Exercise_7.c -o program
// Exercise_7.c: In function ‘main’:
// Exercise_7.c:19:38: error: ‘i’ undeclared (first use in this function)
//    19 |     printf("Final value of i: %d\n", i); // This will cause a compilation error
//       |                                      ^
// Exercise_7.c:19:38: note: each undeclared identifier is reported only once for each function it appears in

// Actual output
// mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc Exercise_7.c -o program
// mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
// 0
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9