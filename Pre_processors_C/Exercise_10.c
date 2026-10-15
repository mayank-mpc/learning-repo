#include <stdio.h>

#define LIMIT 10
int first = LIMIT;
#undef LIMIT
#define LIMIT 20
int counter = 5;
#define counter (counter * 2)
#define STR(x)  #x
#define XSTR(x) STR(x)

int main(void)
{
#if FAN_ENABLED
    printf("fan on\n");
#else
    printf("fan off\n");
#endif
    printf("%d %d\n", first, LIMIT);
    printf("%d\n", counter);
    printf("%s %s\n", STR(LIMIT), XSTR(LIMIT));
    printf("LIMIT\n");
    return 0;
}

/* Output 1:
fan off // FAN_ENABLED not defined
10 20 // limit is assigned with value 10 and macro defined again after undef with value 20
10 // counter will be replaced by (5 * 2) which is 10 because macro replaces with value in the source file
LIMIT 20 // STR(x) does not expands ("LIMIT") but XSTR(x) expands first (20) -> STR(x) expands to "20"
LIMIT
*/

/* Output 2:
fan on // FAN_ENABLED defined in compile command
10 20 // limit is assigned with value 10 and macro defined again after undef with value 20
10 // counter will be replaced by (5 * 2) which is 10 because macro replaces with value in the source file
LIMIT 20 // STR(x) does not expands ("LIMIT") but XSTR(x) expands first (20) -> STR(x) expands to "20"
LIMIT
*/

/* Output (gcc -Wall -Wextra Exercise_10.c):
 *   fan off
 *   10 20
 *   10
 *   LIMIT 20
 *   LIMIT
 *
 * Line 1: fan off
 *   FAN_ENABLED is defined nowhere. Inside #if an undefined name is NOT
 *   an error, it silently becomes 0, so #if 0 keeps the #else branch.
 *   (-Wundef makes GCC warn about this.)
 *   With -DFAN_ENABLED (no value) GCC defines it as 1, so it prints "fan on".
 *
 * Line 2: 10 20
 *   The preprocessor works top to bottom. On line 3 LIMIT is still 10,
 *   so the compiler sees "int first = 10". The later #undef/#define
 *   cannot change text that was already replaced. In main, LIMIT is 20.
 *
 * Line 3: 10
 *   gcc -E shows: printf("%d\n", (counter * 2))
 *   The macro expands only ONCE. The inner "counter" is not expanded
 *   again, so it stays as the variable name. The preprocessor never
 *   knows the value 5. At runtime the variable is 5, giving 5 * 2 = 10.
 *
 * Line 4: LIMIT 20
 *   STR(LIMIT)  -> "LIMIT"           # stops expansion (name only)
 *   XSTR(LIMIT) -> STR(20) -> "20"   plain x in XSTR expands first
 *
 * Line 5: LIMIT
 *   Macros are never expanded inside string literals, so "LIMIT\n"
 *   is printed exactly as written.
 */