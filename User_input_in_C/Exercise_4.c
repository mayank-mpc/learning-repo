// Limited string input

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
    char str[30] = {0};
    printf("Please enter a string without spaces:\nInput: ");
    scanf("%10s", str);

    printf("Stored 10 characters of the string: %s\n", str);
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Please enter a string without spaces:
Input: hellowelcometothisworld
Stored 10 characters of the string: hellowelco*/