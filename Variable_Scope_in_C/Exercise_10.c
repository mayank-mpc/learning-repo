// Example of loop shadowing where same variable can be declared again within loop

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
    for(int i = 0; i < 10; i++) {
        // Add line of code here
        printf("Iteration %d\n", i);
        for(int i = 0; i < 5; i++) {
            // Add line of code here
            printf("  Inner Iteration %d\n", i);
        }
    }
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
Iteration 0
  Inner Iteration 0
  Inner Iteration 1
  Inner Iteration 2
  Inner Iteration 3
  Inner Iteration 4
Iteration 1
  Inner Iteration 0
  Inner Iteration 1
  Inner Iteration 2
  Inner Iteration 3
  Inner Iteration 4
Iteration 2
  Inner Iteration 0
  Inner Iteration 1
  Inner Iteration 2
  Inner Iteration 3
  Inner Iteration 4
Iteration 3
  Inner Iteration 0
  Inner Iteration 1
  Inner Iteration 2
  Inner Iteration 3
  Inner Iteration 4
Iteration 4
  Inner Iteration 0
  Inner Iteration 1
  Inner Iteration 2
  Inner Iteration 3
  Inner Iteration 4
Iteration 5
  Inner Iteration 0
  Inner Iteration 1
  Inner Iteration 2
  Inner Iteration 3
  Inner Iteration 4
Iteration 6
  Inner Iteration 0
  Inner Iteration 1
  Inner Iteration 2
  Inner Iteration 3
  Inner Iteration 4
Iteration 7
  Inner Iteration 0
  Inner Iteration 1
  Inner Iteration 2
  Inner Iteration 3
  Inner Iteration 4
Iteration 8
  Inner Iteration 0
  Inner Iteration 1
  Inner Iteration 2
  Inner Iteration 3
  Inner Iteration 4
Iteration 9
  Inner Iteration 0
  Inner Iteration 1
  Inner Iteration 2
  Inner Iteration 3
  Inner Iteration 4*/