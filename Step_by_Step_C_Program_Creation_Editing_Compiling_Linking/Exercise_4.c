// Conditional Compilation Examples for Using #ifdef and #ifndef

#include <stdio.h>
#define CERTIFICATION

int main() {

#ifdef CERTIFICATION
    // if CERTIFICATION macro is defined
    printf("Sanfoundry Certification is Active\n");
#endif

#ifndef DEBUG
    // if DEBUG macro is not defined
    printf("Debugging is Disabled\n");
#endif
    return 0;
}

/* Output
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Sanfoundry Quiz Mode Enabled */