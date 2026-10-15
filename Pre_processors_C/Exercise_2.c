// Example of macro taking arguments and expressions before returning the value as per ternary logic

#include <stdio.h>

#if (1) // Incorrect way for macro defination
#define CLAMP(value,lower_range,higher_range) (value <= lower_range) ? lower_range : (value >= higher_range) ? higher_range : value
#else // Correct way for macro defination
#define CLAMP(value,lower_range,higher_range) ((value) <= (lower_range)) ? (lower_range) : ((value) >= (higher_range)) ? (higher_range) : (value)
#endif

int main(void)
{
    int temp = 10;
    printf("Clamp Value: %d", CLAMP(temp + 5,0,30));
    return 0;
}