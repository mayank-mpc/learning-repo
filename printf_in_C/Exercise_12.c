// %n format specifier is used to record the number of bytes printed in the output and store it in integer variable.

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
    int num_of_bytes = 0;

    // Add the %n specifier in the string to record the number of byter printed till that point
    printf("This%n is the very new thing which came into light for me.\n", &num_of_bytes);
    printf("Number of bytes printed %d\n\n", num_of_bytes);

    printf("A%n\n", &num_of_bytes);
    printf("Number of bytes printed %d\n\n", num_of_bytes);

    printf("In the third string will try to record a long string%n\n", &num_of_bytes);
    printf("Number of bytes printed %d\n\n", num_of_bytes);

    printf("Will try to include special character\r\n%n", &num_of_bytes);
    printf("Number of bytes printed %d\n\n", num_of_bytes);

    printf("%nHello World\n", &num_of_bytes); // This will record nothing
    printf("Number of bytes printed %d\n\n", num_of_bytes);

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
This is the very new thing which came into light for me.
Number of bytes printed 4

A
Number of bytes printed 1

In the third string will try to record a long string
Number of bytes printed 52

Will try to include special character
Number of bytes printed 39

Hello World
Number of bytes printed 0*/