// c program to demonstrate undefined behavior
// of combination of post and pre increment

#include <stdio.h>

int main()
{
    // code
    int p = 4;

    printf("%d", ++p * p++);
    // 1. First right-most parameter will be executed ( p++ = 4 -> p = 5)
    // 2. Second parameter will be executed ( ++p = 6 )
    // 3. Finally printing the output 30

    return 0;
}