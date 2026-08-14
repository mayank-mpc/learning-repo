// Header
#include <stdio.h>
#include <stdint.h>

#define NO_COMMAND (1)

// Main function
int main(int argc, char *argv[])
{
    if(NO_COMMAND == argc)
    {
        printf("Please provide argument in the following manner:\n");
        printf("./a.out <first_arg> -space- <second_arg> -space- <n_number_arg>\n");
    }
    else
    {
        for(uint8_t i = 0 ; i <= argc ; i++)
        {
            printf("%d argument is %s\n", (i+1), argv[i]);
        }
    }
    return 0;
}

/* Output
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out abc def 21
1 argument is ./a.out
2 argument is abc
3 argument is def
4 argument is 21
5 argument is (null) */