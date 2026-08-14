# Why %lf behaves differently in scanf and printf?

1.  printf function prints the **%f** and **%lf** both in case double and float values. Remeber the type check warnings can occur during compilation and sometimes an error as well.
2.  In case of scan function it does not work the same way. Here the scanf function blocks 8 bytes of data for **%lf** and 4 bytes of data for **%f**.

# Example:
```
int main()\
{\
double x = 0.0;\
scanf("%f", &x);\
printf("%f", x);

return 0;\
}
```
Input:
`7`

Output:
`0.000000`

# Correct example
```
int main()\
{\
double x = 0.0;\
scanf("%lf", &x);\
printf("%f", x);

return 0;\
}
```
Input: 
`8.5`

Output:
`8.500000`