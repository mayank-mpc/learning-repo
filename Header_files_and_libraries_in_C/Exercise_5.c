// Include macros only once using the Include Header Guards

#include <stdio.h>
#include "config.h"

int main()
{
    printf("Maximum users %d", MAX_USERS);
    printf("Version %s", VERSION);

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Maximum users 10Version 1.0.1*/