// Using structure along with the Header Guards

#include <stdio.h>
#include "person.h"

int main()
{
    person val = {"Mayank", 25};

    printf("Name: %s, Age: %d", val.name, val.age);

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Name: Mayank, Age: 25*/