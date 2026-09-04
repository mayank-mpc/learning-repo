// Using enum along with Header Guards

#include <stdio.h>
#include "status.h"

int main()
{
    status val = STATUS_BUSY;

    if (STATUS_BUSY == val)
    {
        printf("System status is Busy");
    }
    else if (STATUS_OK == val)
    {
        printf("System status is Okay");
    }
    else if(STATUS_ERROR == val)
    {
        printf("System status is Error");
    }

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
System status is Busy*/