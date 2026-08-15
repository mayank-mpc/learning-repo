// Static functions lifetime is within a single file and it cannot be accessed from elsewhere. If tried to access then will cause compilation error

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add global variables here

// Add function declaration here

int main(void)
{
    // Add line of code here
    function();
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ cc Exercise_3.c d4_scope_static_function_declaration_2.c -o program
d4_scope_static_function_declaration_1.c: In function ‘main’:
d4_scope_static_function_declaration_1.c:16:5: warning: implicit declaration of function ‘function’ [-Wimplicit-function-declaration]
   16 |     function();
      |     ^~~~~~~~
/usr/bin/ld: /tmp/ccr1Dvlu.o: in function `main':
d4_scope_static_function_declaration_1.c:(.text+0xe): undefined reference to `function'
collect2: error: ld returned 1 exit status*/