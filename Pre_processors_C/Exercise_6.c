// Example of generating names with macros

#include <stdio.h>

#define DECLARE_COUNTER(name) int name##_count = 0

#define INC(name) ((name##_count)++)

int main(void)
{
    DECLARE_COUNTER(water);
    DECLARE_COUNTER(water);
    DECLARE_COUNTER(light);
    INC(water);
    INC(water);
    INC(light);

    printf("water=%d light=%d\n", water_count, light_count);
    return 0;
}