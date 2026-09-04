// Using the extern along with the Header Guards

#include <stdio.h>
#include "counter.h"

int main()
{
    printf("Intial counter value %d\n", counter);
    increment_counter();
    printf("Incremented counter value %d\n", counter);
    increment_counter();
    printf("Incremented counter value %d\n", counter);
    increment_counter();

    printf("Final counter value %d\n", counter);
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Intial counter value 0
Incremented counter value 1
Incremented counter value 2
Final counter value 3*/