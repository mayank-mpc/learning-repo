// Header include guard

#include <stdio.h>
#include "operation.h"

int main()
{
    int val_a = 0;
    int val_b = 0;

    printf("Enter value for variable A: ");
    scanf("%d", &val_a);
    printf("Enter value for variable B: ");
    scanf("%d", &val_b);

    printf("Addition: %d", addition(val_a, val_b));
    printf("Subtraction: %d", subtraction(val_a, val_b));

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Enter value for variable A: 10
Enter value for variable B: 20
Addition: 30Subtraction: -10*/