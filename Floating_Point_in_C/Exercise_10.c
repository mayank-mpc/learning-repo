// Code to convert binary to floating point

#include <math.h>
#include <stdio.h>

typedef union {
    float f;
    struct {
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
    } raw;
} myfloat;

// Function to convert a binary array to integer
unsigned int convertToInt(unsigned int* arr, int low, int high) {
    unsigned int val = 0;
    int power = 0;

    // Iterate from high index (LSB) down to low index (MSB)
    for (int i = high; i >= low; i--) {
        if (arr[i] == 1) {
            // Using bitwise shift is faster and safer than pow(2, n)
            val += (1U << power);
        }
        power++;
    }
    return val;
}

int main() {
    // 32-bit IEEE-754 representation
    // Sign: 1, Exponent: 10000000, Mantissa: 01000000000000000000000
    unsigned int ieee[32] = {
        1,                         // Sign (index 0)
        1, 0, 0, 0, 0, 0, 0, 0,    // Exponent (index 1-8)
        0, 1, 0, 0, 0, 0, 0, 0,    // Mantissa (index 9-31)
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0
    };

    myfloat var;

    // 1. Convert Mantissa (bits 9 to 31)
    var.raw.mantissa = convertToInt(ieee, 9, 31);

    // 2. Convert Exponent (bits 1 to 8)
    var.raw.exponent = convertToInt(ieee, 1, 8);

    // 3. Assign Sign bit
    var.raw.sign = ieee[0];

    printf("The float value of the given IEEE-754 representation is:\n");
    printf("%f\n", var.f);

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
The float value of the given IEEE-754 representation is:
-2.500000*/