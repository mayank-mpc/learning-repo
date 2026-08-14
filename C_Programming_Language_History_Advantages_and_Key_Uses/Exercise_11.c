// c program to demonstrate undefined behavior
// of combination of post and post increment

#include <stdio.h>

int main()
{
    // code
    int p = 4;
    printf("%d", ++p * ++p);
    // 1. First it will execute right most ( ++p = 5 -> p=5 )
    // 2. Second it will execute left most ( ++p = 6 -> p=6 )
    // 3. Now value of p = 6 so output will be 36

    return 0;
}