// Example of macro based logger

#include <stdio.h>

#if (1)
#define LOG(level,fmt, ...) printf("[%s] %s:%d in %s(): " fmt "\n", #level, __FILE__, __LINE__, __func__, ##__VA_ARGS__) // GCC Standard logging for backwards compatibilty and used in every firmware
#else
#define LOG(level,fmt, ...) printf("[%s] %s:%d in %s(): " fmt "\n", #level, __FILE__, __LINE__, __func__ __VA_OPT__(,) __VA_ARGS__) // Follows C23 standard and to compile this have to add -std=c2x
#endif

int main(void)
{
    LOG(WARN,  "zone %d too dry (%d%%)", 3, 12);
    LOG(ERROR, "pump %s failed", "P1");
    LOG(INFO,  "system started");
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Pre_processors_C/Exercise_7.c
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
[WARN] Pre_processors_C/Exercise_7.c:9 in main(): zone 3 too dry (12%)
[ERROR] Pre_processors_C/Exercise_7.c:10 in main(): pump P1 failed
[INFO] Pre_processors_C/Exercise_7.c:11 in main(): system started*/