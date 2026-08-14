# What is a placeholder and what is its purpose in C language?

1.  Placeholder is special symbol inside the string which tells where to place a value and what type of value to be expected.
2.  Most commonly used are **%d**, **%f**, **%c**, **%s**, **%u**,etc.
3.  The placeholder is replaced with the respected values present in the arguments of printf function.
4.  If the placeholder is for integer value (%d) and variable is of float then it can cause undefined behaviour.

5.  Please note that sometimes undefined behaviour are explicitly done for debugging or other purposes. For example the integer placeholder (%d) will show the ASCII value of character variables.

# Undefined behaviour example:

Code:
```
#include <stdio.h>

int main()\
{\
float x = 9.4;\
printf("Hello World %d", x);

return 0;\
}
```
Output:

`Hello World -1642563112`