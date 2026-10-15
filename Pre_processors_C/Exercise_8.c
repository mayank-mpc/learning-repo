// Example of debug mode prints which are enabled through compilation

#include <stdio.h>

#ifdef DEBUG_MODE
#define DEBUG_PRINT(fmt, ...) printf("[DEBUG] %s:%d %s(): " fmt, __FILE_NAME__, __LINE__, __func__, ##__VA_ARGS__)
#else
#define DEBUG_PRINT(...)  do { if (0) printf(__VA_ARGS__); } while (0)
#endif

int main(void)
{
    int moisture = 10;

    /* Test A: if/else without braces */
    if (moisture < 20)
        DEBUG_PRINT("moisture low: %d\n", moisture);
    else
        printf("moisture ok\n");

    /* Test B: if without else */
    if (moisture < 20)
        DEBUG_PRINT("checking zone %d\n", 1);
    printf("done\n");
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_8.c -DDEBUG_MODE
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
[DEBUG] Exercise_8.c:17 main(): moisture low: 10
[DEBUG] Exercise_8.c:23 main(): checking zone 1
done
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_8.c
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
done
*/