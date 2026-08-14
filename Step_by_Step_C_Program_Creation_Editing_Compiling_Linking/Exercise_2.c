// Conditional Compilation Examples for #if, #else, #endif

#include <stdio.h>
#define QUIZ_MODE 1

int main() {

#if QUIZ_MODE
    // if QUIZ_MODE macro is defined
    printf("Sanfoundry Quiz Mode Enabled\n");

#else
    // if QUIZ_MODE macro is not defined
    printf("Test Mode Enabled\n");

#endif // end of compilation block
    return 0;
}