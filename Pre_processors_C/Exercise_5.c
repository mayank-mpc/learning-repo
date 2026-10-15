// Example of self printing debug macro

#include <stdio.h>

#define GPIO_NUM_2 (2)
#define FW_NAME  "greenhouse"
#define VREF     3.3
#define LED_PIN  GPIO_NUM_2

#define BAUD_RATE (9600)

/* # turns an argument into a string WITHOUT expanding it.
 * A plain argument (no #) is expanded first, then substituted.
 *
 * STR(BAUD_RATE)  -> "BAUD_RATE"   # stops expansion: you get the name
 * XSTR(BAUD_RATE) -> STR((9600)) -> "(9600)"
 *                    XSTR's plain x expands first: you get the value
 *
 * PRINT_MACRO uses both: #name for the name, XSTR(name) for the expansion.
 * Both are plain strings, so it works for any macro (int, string, float, names).
 */
#define STR(x) #x
#define XSTR(x) STR(x)

/* For example, PRINT_INT(a * b + 1) prints a * b + 1 = 13. */
#define PRINT_INT(expression) ( (printf(#expression " = %d\n", expression)) )

/* Given #define BAUD_RATE 9600, PRINT_MACRO(BAUD_RATE) prints BAUD_RATE expands to 9600. */
#define PRINT_MACRO(BAUD_RATE) ( (printf(#BAUD_RATE " expands to %s\n", XSTR(BAUD_RATE))) )

int main(void)
{
    PRINT_INT(10 * 2 + 3 / 10);
    PRINT_MACRO(BAUD_RATE);
    PRINT_MACRO(FW_NAME);
    PRINT_MACRO(VREF);
    PRINT_MACRO(LED_PIN);
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
10 * 2 + 3 / 10 = 20
BAUD_RATE expands to 9600*/