// Error cases where zero is returned by the scanf

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Add Macros here

// Add function declaration here

// Add global variables here

int main(void)
{
    // Add line of code here
    int val = 0;
    char chr = 0;
    float float_value = 0.0;
    char str[20] = {0};

    /* Error case 1: When character or string is used as input */
    // printf("Enter an integer value:\nInput: ");
    // printf("Return value: %d\n", scanf("%d", &val));
    // printf("Input data: %d\n", val);

    /*  Output:
        mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        Enter an integer value:
        Input: ajdsh
        Return value: 0
        Input data: 0
        mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        Enter an integer value:
        Input: a
        Return value: 0
        Input data: 0
    */


    /* Error case 2: When character or string is used as input */
    // printf("Enter an float value:\nInput: ");
    // printf("Return value: %d\n", scanf("%f", &float_value));
    // printf("Input data: %f\n", float_value);

    /*  Output:
        mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        Enter an float value:
        Input: !
        Return value: 0
        Input data: 0.000000
        mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        Enter an float value:
        Input: &23.4
        Return value: 0
        Input data: 0.000000
        mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        Enter an float value:
        Input: 9.84
        Return value: 1
        Input data: 9.840000
        mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        Enter an float value:
        Input: 8
        Return value: 1
        Input data: 8.000000
    */

    /* Error case 3: When required literals are not added alongside the input */
    // printf("Enter an integer along with literal value:\nInput: ");
    // printf("Return value: %d\n", scanf("n: %d", &val));
    // printf("Input data: %d\n", val);

    /*  Output:
        mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        Enter an integer along with literal value:
        Input: string
        Return value: 0
        Input data: 0
        mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        Enter an integer along with literal value:
        Input: A
        Return value: 0
        Input data: 0
        mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        Enter an integer along with literal value:
        Input: &
        Return value: 0
        Input data: 0
        mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        Enter an integer along with literal value:
        Input: 45
        Return value: 0
        Input data: 0
        mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        Enter an integer along with literal value:
        Input: 3256.2356
        Return value: 0
        Input data: 0
        mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        Enter an integer along with literal value:
        Input: n:45
        Return value: 1
        Input data: 45
    */

    /* Error Case 4 */
    printf("Enter an string:\nInput: ");
#ifdef __linux__
    // printf("Return value: %d\n", scanf("%[^\n]", str)); // When enter is pressed without any data
#elif _WIN64
    // printf("Return value: %d\n", scanf("%[^\r\n]", str)); // When enter is pressed without any data
#endif
    // printf("Return value: %d\n", scanf("%[A-z]", str)); // Only accepts data within provided range of characters
    // printf("Return value: %d\n", scanf("%[0-100]", str)); // Only accepts data of character 0 and 1, rest are just ignored
    printf("Return value: %d\n", scanf("%[0-999]", str)); // Only accepts data of this characters 0 - 9, rest are just ignored
    printf("Input data: %s\n", str);

    /*  Output */
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: A
        // Return value: 0
        // Input data:
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: 0
        // Return value: 1
        // Input data: 0
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: 200
        // Return value: 0
        // Input data:
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: 101
        // Return value: 1
        // Input data: 101
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: 102
        // Return value: 1
        // Input data: 10
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: 2.356
        // Return value: 0
        // Input data:
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: 521487
        // Return value: 0
        // Input data:
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: 100000
        // Return value: 1
        // Input data: 100000
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: 1023
        // Return value: 1
        // Input data: 10
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: 1000
        // Return value: 1
        // Input data: 1000
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: 105
        // Return value: 1
        // Input data: 10
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: 205
        // Return value: 0
        // Input data:
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: ^[[A^[[A^[[A^[[A^[[B^[[B^[[B^[[B^[[D^[[D^[[D^[[D^[[C^[[C^[[C^[[C
        // Return value: 0
        // Input data:
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: -12
        // Return value: 0
        // Input data:
        // mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D4$ ./program
        // Enter an string:
        // Input: 854796325874125636985214
        // Return value: 1
        // Input data: 854796325874125636985214

        /* Please note that scanset can only be used for string and the range described are present in the ASCII table */

    return 0;
}