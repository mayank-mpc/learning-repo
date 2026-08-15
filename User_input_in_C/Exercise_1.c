// Basic Arithmetic

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add function declaration here

// Add global variables here

int main(void)
{
    // Add line of code here
    int var1 = 0, var2 = 0; // If you don't initialize and provide float as input then the output will be garbage value

    printf("Please enter value for var1:\n");
    scanf("%d", &var1);
    printf("Please enter value for var2:\n");
    scanf("%d", &var2);

    printf("Addition of variables: %d\n", (var1 + var2));
    printf("Subtraction of variables: %d\n", (var1 - var2));
    printf("Multiplication of variables: %d\n", (var1 * var2));
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Please enter value for var1:
10
Please enter value for var2:
20
Addition of variables: 30
Subtraction of variables: -10
Multiplication of variables: 200*/

/* Garbage Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Please enter value for var1:
20.2
Please enter value for var2:
Addition of variables: 32785
Subtraction of variables: -32745
Multiplication of variables: 655300*/