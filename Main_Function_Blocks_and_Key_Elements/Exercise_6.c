#include<stdio.h>
#define fun m##a##i##n // ## is us used to combine tokens two tokens eg. a##b -> ab

int fun() // Here fun -> main to create illusion
{
    printf("Geeksforgeeks");
    return 0;
}

/* Output
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Geeksforgeeks*/