// Reference code to Q4 of practice questions

#include <stdio.h>
#include <string.h>

int main(void)
{
#if ERROR_CASE
    char *str = "zone1";
    printf("Literal %s\n", str);
    str[0] = 'Z';
    // printf("Literal changes %s\n", str);
#elif FIX_1
    char zone[] = "zone1"; // Allocates an array on the stack and copies "zone1" into it
    printf("Literal %s\n", zone);
    zone[0] = 'Z';         // Perfectly valid! The stack is readable and writable.
    printf("Literal changes %s\n", zone);
#elif FIX_2
    char *zone = strdup("zone1"); // Copies the literal to dynamically allocated heap memory
    printf("Literal %s\n", zone);
    zone[0] = 'Z';                // Valid! Don't forget to free(zone) later.
    printf("Literal changes %s\n", zone);

    free(zone); // Explicitly release the heap memory back to the system
    zone = NULL; // Good practice: prevent accidental reuse (dangling pointer)
#endif
    return 0;
}