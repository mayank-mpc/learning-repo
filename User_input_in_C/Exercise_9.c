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
    char str[20];

    printf("Enter the string without space:\n");
    scanf("%s", str);

    printf("The String is \"%s\"\n", str);
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
Enter the string without space:
Normal Hello World // Whitespace characters are blank ( ), tab (\t), or newline (\n) which are ignored by scanf due to which further data is not recorded
The String is "Normal"
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
Enter the string without space:
HelloWorld!
The String is "HelloWorld!"*/