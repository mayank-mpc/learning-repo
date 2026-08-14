#include<stdio.h>
#include<stdlib.h>

int fun() // our custom main function
{
    printf("Hello World!\n");
    return 0;
}

void _start()
{
    int x = fun(); //calling custom main function
    exit(x);
}

/* Compilation command:
cc -nostartfiles ./Main_Function_Blocks_and_Key_Elements/Exercise_5.c*/

/* Output
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Hello World! */