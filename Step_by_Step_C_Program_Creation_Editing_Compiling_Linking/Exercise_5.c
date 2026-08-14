// Conditional Compilation Examples for #elif in Conditional Chain

#include <stdio.h>
#define MODE 2

int main() {

#if MODE == 1
    // if MODE macro is 1
    printf("Sanfoundry Quiz Module\n");
#elif MODE == 2
    // if MODE macro is 1
    printf("Sanfoundry Test Module\n");
#else
    // if none of the above conditions are met
    printf("Sanfoundry Practice Module\n");
#endif
    return 0;
}

/* Output
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Sanfoundry Test Module */