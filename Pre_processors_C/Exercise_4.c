// Example of data swapping between two variables using macros

#include <stdio.h>

#define SWAP_INT(var_1,var_2) \
        do \
        { \
            int tmp = 0; \
            tmp = (var_1); \
            (var_1) = (var_2); \
            (var_2) = tmp; \
        } while(0)

int main(void)
{
    int x = 10, y = 20;
    printf("Before X: %d, Y: %d\n", x, y);
    SWAP_INT(x, y);
    printf("After X: %d, Y: %d\n", x, y);

    /* Edge Case:
    do {
        int tmp = 0;      // inner tmp = 0       (outer tmp is now hidden)
        tmp = (tmp);      // inner = inner → 0   (meant to save the OUTER tmp, can't reach it)
        (tmp) = (y);      // inner = 9           (meant to change the OUTER tmp)
        (y) = tmp;        // y = 9               (y gets its own value back)
    } while(0) */
    if (x > y)
    {
        int tmp = 5;
        x = 30, y = 60;
        printf("Before X: %d, Y: %d\n", x, y);
        SWAP_INT(x, y);
        printf("After X: %d, Y: %d\n", x, y);
    }
    else
    {
        printf("already in order\n");
    }

    return 0;
}