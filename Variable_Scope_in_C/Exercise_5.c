// Error case of extern variable where the linked is waiting for the extern variable to be defined somewhere and if not then it provides the linker error in compilation

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add global variables here

// Add function declaration here
int function(void)
{
    int extern_variable = 50; // Variable declared in function
    printf("The value of extern_variable in function is %d\n", extern_variable);
    return 0;
}

int main(void)
{
    // Add line of code here
    extern int extern_variable;
    function();
    printf("The value of extern_variable in main function is %d\n", extern_variable);
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc Exercise_5.c -o program
/usr/bin/ld: /tmp/ccpyZ4X1.o: warning: relocation against `extern_variable' in read-only section `.text'
/usr/bin/ld: /tmp/ccpyZ4X1.o: in function `main':
Exercise_5.c:(.text+0x42): undefined reference to `extern_variable'
/usr/bin/ld: warning: creating DT_TEXTREL in a PIE
collect2: error: ld returned 1 exit status*/