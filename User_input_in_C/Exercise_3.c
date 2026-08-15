// Stack smashing and buffer overflow example

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
    char main_buffer[10] = {0};
    char side_buffer[20] = "Secondary string";

    /* Please note that the same thing does happens when side_buffer is empty*/

    printf("Input: ");
    scanf("%s", main_buffer);

    printf("Main buffer %s\n", main_buffer);
    printf("Side buffer %s\n", side_buffer);
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Input: alwaysgoodboyisalwaysagoodboy
Main buffer alwaysgoodboyisalwaysagoodboy
Side buffer boyisalwaysagoodboy*/