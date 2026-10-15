// Example of function evaluation in the macro and compared with the actual function

#include <stdio.h>

#if (1) // edge case
#define CLAMP(value,lower_range,higher_range) ((value) <= (lower_range)) ? (lower_range) : ((value) > (higher_range)) ? (higher_range) : (value)
#else
#define CLAMP(value,lower_range,higher_range) ( ((value) <= (lower_range)) ? (lower_range) : ((value) > (higher_range)) ? (higher_range) : (value) )
#endif

int glob_var = 0;

int read_temp(void);

/**
 * @brief This function compares the
 * value with the range.
 *
 * @param value Actual data of the sensor
 * @param lower_range Lower limit of the data
 * @param higher_range Upper limit of the data
 * @return int Sensor data after comparisions
 */
int clamp(int value, int lower_range, int higher_range);

int main(void)
{
    int result = CLAMP(read_temp(), 0, 40);
    printf("macro:    result=%d, reads=%d\n\n", result, glob_var);

    glob_var = 0; // reset the counter
    result = clamp(read_temp(), 0, 40);
    printf("function: result=%d, reads=%d\n", result, glob_var);

    /* Edge case -- output with the OLD macro (no outer parentheses):
    * #define CLAMP(v,l,h) ((v) <= (l)) ? (l) : ((v) > (h)) ? (h) : (v)
    * 2 * CLAMP(45, 0, 40) = 40   <- "2 *" attached to the condition
    * CLAMP(45, 0, 40) + 1 = 40   <- "+ 1" attached to the last branch only
    */
    printf("2 * CLAMP(45, 0, 40) = %d\n", 2 * CLAMP(45, 0, 40));
    printf("CLAMP(45, 0, 40) + 1 = %d\n", CLAMP(45, 0, 40) + 1);
    return 0;
}

int read_temp(void)
{
    printf("%d reading....\n", glob_var);
    return 38 + (glob_var++);
}

int clamp(int value, int lower_range, int higher_range)
{
    if (value <= lower_range)
    {
        return lower_range;
    }
    else if (value > higher_range)
    {
        return higher_range;
    }

    return value;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_3.c
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
0 reading....
1 reading....
2 reading....
macro:    result=40, reads=3

0 reading....
function: result=38, reads=1
2 * CLAMP(45, 0, 40) = 80
CLAMP(45, 0, 40) + 1 = 41

// Edge case
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_3.c
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
0 reading....
1 reading....
2 reading....
macro:    result=40, reads=3

0 reading....
function: result=38, reads=1
2 * CLAMP(45, 0, 40) = 40
CLAMP(45, 0, 40) + 1 = 40*/