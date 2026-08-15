// Program to convert float to binary

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add global variables here

// Add function declaration here
void float_to_binary(float num, char *binary_str)
{
    // Convert float to binary representation
    uint32_t as_int = 0;
    memcpy(&as_int, &num, sizeof(float));

    for (int i = 31; i >= 0; i--) {
        binary_str[i] = (as_int & 1) ? '1' : '0';
        as_int >>= 1;
    }
    binary_str[32] = '\0'; // Null-terminate the string
}

int main(void)
{
    // Add line of code here
    float num = 3.14f; // Example float number
    char binary_str[33]; // 32 bits + null terminator
    float_to_binary(num, binary_str);
    printf("Binary representation of %f: %s\n", num, binary_str);

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
Binary representation of 3.140000: 01000000010010001111010111000011*/