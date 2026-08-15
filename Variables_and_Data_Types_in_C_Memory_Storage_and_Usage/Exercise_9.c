// Error case of extern storage class

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add global variables here
extern int var; // The variable is defined somewhere else

int var; // To remove the linker error, we can defined it here. Please note this variable was not defined initially.

// Add function declaration here

int main(void)
{
    // Add line of code here
    printf("Extern variable value: %d\n", var);
    return 0;
}


/* Output will give error because the variable 'var' is declared as extern but not defined anywhere in the program */
// mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc d4_variable_extern_storage.c -o program
// /usr/bin/ld: /tmp/ccLo3H67.o: warning: relocation against `var' in read-only section `.text'
// /usr/bin/ld: /tmp/ccLo3H67.o: in function `main':
// d4_variable_extern_storage.c:(.text+0xa): undefined reference to `var'
// /usr/bin/ld: warning: creating DT_TEXTREL in a PIE
// collect2: error: ld returned 1 exit status

/* Output with fix*/
// mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc d4_variable_extern_storage.c -o program
// mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
// Extern variable value: 0