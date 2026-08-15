// Scanf with scanset condition with range of characters

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
    printf("Return value: %d\n", scanf("%[A-Z a-z]", str)); // Only accepts data within provided range of characters
    printf("Input data: %s\n", str); // When enter is pressed either '\n' or '\r\n' are feeded which are not in the given range, due to which exits the scanf statement to print the output

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc ./d4_scanf_scanset_range_of_characters.c -o ./program
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
Enter an string:
Input: thisISastring
Return value: 1
Input data: thisISastring
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
Enter an string:
Input: HelloWORLD
Return value: 1
Input data: HelloWORLD
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
Enter an string:
Input: 123Hello // Here the condition did not match so did not stored any string
Return value: 0
Input data:*/