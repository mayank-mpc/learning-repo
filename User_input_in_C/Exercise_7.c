// Scanf using the scanset conditions for a newline

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
    printf("Enter a string and press enter to complete the string:\nInput: ");
    printf("Return value: %d\n", scanf("%[^\n]", str));
    printf("Input string: %s\n", str);
    return 0;
}

/* mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
Enter a string and press enter to complete the string:
Input: this is an example of newline
Return value: 1
Input string: this is an example of newline */