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
    int var = 15;
    float num = 65.124;
    char str[] = "Workspace folder";

    // %[flag][width].[precision][specifier] is the format of the placeholder

    printf("|%-50s|\n", str); // Left aligns the print
    printf("|%50s|\n", str); // Right aligns the print

    printf("|%-50f|\n", num); // Left aligns the print
    printf("|%50f|\n", num); // Right aligns the print
    printf("|% f|\n", num); // It add a space in case of positive number
    printf("|%050f|\n", num); // It pads the space with zeroes
    printf("|%+50f|\n", num); // It shows the plus sign along with number

    printf("|%-50d|\n", var); // Left aligns the print
    printf("|%50d|\n", var); // Right aligns the print
    printf("|% d|\n", var); // It add a space in case of positive number
    printf("|%050d|\n", var); // It pads the space with zeroes
    printf("|%+50d|\n", var); // It shows the plus sign along with number
    printf("|%#50X|\n", var); // It adds 0 or 0x to non zero numbers

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
|Workspace folder                                  |
|                                  Workspace folder|
|65.124001                                         |
|                                         65.124001|
| 65.124001|
|0000000000000000000000000000000000000000065.124001|
|                                        +65.124001|
|15                                                |
|                                                15|
| 15|
|00000000000000000000000000000000000000000000000015|
|                                               +15|
|                                               0XF|*/