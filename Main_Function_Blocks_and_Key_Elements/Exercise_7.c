// Token pasting code

// Header
#include <stdio.h>
#define mayank m##a##i##n // Pre-processor considers only ## as valid

/*

Some of the Invalid token pasting

a###b -> Invalid
a#b -> Invalid
#define func(a,b) a##b -> func(f,+) -> Invalid

*/

// Main function
int mayank()
{
    printf("Hello World");
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Hello World */