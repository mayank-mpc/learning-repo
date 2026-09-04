// Classic example of basic input and output using Standard input/output library

#include <stdio.h>

int main()
{
    char name[20] = {0};
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s", name);

    return 0;
}

/* Output:
mayank@MPC-FW-LAP11:~/Desktop/Learning Repo/learning-repo$ ./a.out
Enter your name: Mayank
Your name is Mayank*/