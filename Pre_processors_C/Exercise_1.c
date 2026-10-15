// This practice program teaches about the precedence in macro definations

#include <stdio.h>

#if (0) // Incorrect macro definations
#define WIDTH 4 + 2
#define AREA(w, h) w * h
#else // Correct macro defination practice
#define WIDTH (4 + 2)
#define AREA(w, h) ((w) * (h))
#endif

int main(void)
{
    printf("%d\n", WIDTH * 3);
    printf("%d\n", AREA(WIDTH, 2));
    printf("%d\n", 100 / AREA(5, 2));
    return 0;
}

/* Output:
Incorrect output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_1.c
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
10
8
40

Correct Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_1.c
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
18
12
10
*/