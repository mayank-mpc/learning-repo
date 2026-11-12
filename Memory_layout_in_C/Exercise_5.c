// Reference code to Q6 of practice questions

#include <stdio.h>
#include <stdlib.h>

void stack_func(int num)
{
    if (num < 3)
    {
        static int *loc_ptr = NULL;
        int var = 5;
        printf("%d pointer address %p\n", num + 1, &var);
        // printf("Previous %p current %p\n", loc_ptr, &var);
        if((NULL != loc_ptr) && (loc_ptr > &var))
        {
            printf("Stack moving downwards\n");
        }
        loc_ptr = &var;
        stack_func(num + 1);
    }
}

void malloc_func(int num)
{
    if (num < 3)
    {
        static int *loc_ptr = NULL;
        int *pointer = (int *)malloc(sizeof(int));
        printf("%d pointer address %p\n", num + 1, pointer);
        if((NULL != loc_ptr) && (loc_ptr < pointer))
        {
            printf("Malloc moving upwards\n");
        }
        loc_ptr = pointer;
        malloc_func(num + 1);
    }
}

int main(void)
{
    int number = 0;
    printf("Stack function:\n");
    stack_func(number);
    number = 0;
    printf("\nMalloc function:\n");
    malloc_func(number);
    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ cc Memory_layout_in_C/Exercise_5.c
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Stack function:
1 pointer address 0x7ffd27eb1884
2 pointer address 0x7ffd27eb1854
Stack moving downwards
3 pointer address 0x7ffd27eb1824
Stack moving downwards

Malloc function:
1 pointer address 0x5e099204e420
2 pointer address 0x5e099204e440
Malloc moving upwards
3 pointer address 0x5e099204e460
Malloc moving upwards*/