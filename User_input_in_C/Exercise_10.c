// Scanf suppress formate specifier

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
    char str[50] = {0};
    printf("Enter an string:\nInput: ");
    printf("Return value: %d\n", scanf("%*s", str)); // Data is taken as input but never stored in the buffer
    printf("Input data: %s\n", str);
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
Enter an string:
Input: adsad sadasd
Return value: 0
Input data:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
Enter an string:
Input: asdsadasd
Return value: 0
Input data:*/