// Extern storage class error case and usecase

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add global variables here
extern int static_var; // The variable is defined somewhere else

// Add function declaration here

int main(void)
{
    // Add line of code here
    printf("Extern static variable value: %d\n", static_var);
    return 0;
}

/* Output will give error because the variable 'static_var' is declared as extern but defined variable is static in other program */
// mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc d4_variable_static_storage_1.c d4_variable_static_storage_2.c -o program
// /usr/bin/ld: /tmp/ccGnVFYR.o: warning: relocation against `static_var' in read-only section `.text'
// /usr/bin/ld: /tmp/ccGnVFYR.o: in function `main':
// d4_variable_static_storage_1.c:(.text+0xa): undefined reference to `static_var'
// /usr/bin/ld: warning: creating DT_TEXTREL in a PIE
// collect2: error: ld returned 1 exit status

/* Output after fixing */
// mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc d4_variable_static_storage_1.c d4_variable_static_storage_2.c -o program
// mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
// Extern static variable value: 42