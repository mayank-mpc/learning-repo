#include <stdio.h>
#include <stdint.h>

int main(int count,const int *arguments[])
{
    printf("Hello World\n");
    for(uint8_t i = 0; i < count ; i++)
    {
        printf("%d %s\n", i+1, arguments[i]);
    }
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out cat dog cow buffalo
Hello World
1 ./a.out
2 cat
3 dog
4 cow
5 buffalo*/