#include <stdio.h>

int main() // Here main function can take any number of argument without type checks
{
    static int i = 5;
    if (--i) {
        printf("%d", i);
        main(10);
    }
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
4321 */