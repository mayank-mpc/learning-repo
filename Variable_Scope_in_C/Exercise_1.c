// Example of dangling pointer

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add global variables here

// Add function declaration here
int* function(int a, int b)
{
    int sum = a + b; // local sum variable
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return &sum; // returning address of local variable (dangling pointer)
}

int main(void)
{
    // Add line of code here
    int var1 = 10; // Variable declared in main function
    int var2 = 20; // Variable declared in main function
    int total = *function(var1, var2); // dereferencing dangling pointer
    printf("Value of var1 in main function is %d\n", var1);
    printf("Value of var2 in main function is %d\n", var2);
    printf("Value of total in main function is %d\n", total); // undefined behavior

    return 0;
}

/*Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc Exercise_1.c -o program
d4_scope_dangling_pointer.c: In function ‘function’:
d4_scope_dangling_pointer.c:16:12: warning: function returns address of local variable [-Wreturn-local-addr]
   16 |     return &sum; // returning address of local variable (dangling pointer)
      |            ^~~~
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
The sum of 10 and 20 is 30
Segmentation fault (core dumped)*/