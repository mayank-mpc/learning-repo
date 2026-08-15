// Scanf return value

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
    char str[20] = {0};
    int var = 0;
    float float_value = 0.0;
    double double_value = 0.0;
    int ret_val = 0;

    printf("Enter a string without space:\nInput: ");
    ret_val = scanf("%s", str);
    printf("Return Value = %d (Number of input data in one scanf statement)\n", ret_val);

    printf("Enter a string and integer (Eg. Hello 74):\nInput: ");
    ret_val = scanf("%s %d", str, &var);
    printf("Return Value = %d (Number of input data in one scanf statement)\n", ret_val);

    printf("Enter a string, integer, and float value (Eg. Hello 74 3.14):\nInput: ");
    ret_val = scanf("%s %d %f", str, &var, &float_value);
    printf("Return Value = %d (Number of input data in one scanf statement)\n", ret_val);

    printf("Enter a string, integer, float value, and double value (Eg. Hello 74 3.14 65.123):\nInput: ");
    ret_val = scanf("%s %d %f %lf", str, &var, &float_value, &double_value);
    printf("Return Value = %d (Number of input data in one scanf statement)\n", ret_val);

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Enter a string without space:
Input: hello
Return Value = 1 (Number of input data in one scanf statement)
Enter a string and integer (Eg. Hello 74):
Input: Hello 74
Return Value = 2 (Number of input data in one scanf statement)
Enter a string, integer, and float value (Eg. Hello 74 3.14):
Input: Hello 74 3.14
Return Value = 3 (Number of input data in one scanf statement)
Enter a string, integer, float value, and double value (Eg. Hello 74 3.14 65.123):
Input: Hellow 74 3.14 65.123
Return Value = 4 (Number of input data in one scanf statement)*/