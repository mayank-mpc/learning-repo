// Reference code to Q8 of the practice questions

#include <stdio.h>

int main(void)
{
    char arr[16000000] = {0};
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Memory_layout_in_C/Exercise_7.c && ulimit -s
8192
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Segmentation fault         (core dumped) ./a.out*/

/*
• Default compilation (cc without -O flags). Running cc defaults to optimization level -O0.
The compiler kept your 16 MB local array on the stack instead of optimizing it away.
*/

/*mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Segmentation fault         (core dumped) ./a.out
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ulimit -Hs
unlimited
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Memory_layout_in_C/Exercise_7.c
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ulimit -s
32768
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ulimit -Ss 16384
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ulimit -Ss 8192
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Segmentation fault         (core dumped) ./a.out
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ulimit -s
8192
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ulimit -Hs
unlimited
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ */