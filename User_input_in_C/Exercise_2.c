// Character to ASCII conversion

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
    char chr = 0;

    printf("Enter the character (a-z)/(A-Z):\n");
    scanf("%c", &chr);

    printf("The ASCI value is %d\n", chr);
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Enter the character (a-z)/(A-Z):
D
The ASCI value is 68*/