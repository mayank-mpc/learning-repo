# What are the rules of string literals in C language?

1.  String literal is a sequence of characters stored in enclosed double quotes.
2.  Compiler parses and converts string literals before execution.
3.  Escape sequences such as **\n**, **\r**, **\"**, **\\**,etc. are interpreted as on character.
4.  Using character '**\**' is illegal and can cause warnings and error in compilation. Also, unknown escape sequences such '\m' can generate warnings and errors in compilation.
5.  Adjacent string literals get concateneted together in one single string.\
    Example: **printf("Hello ""World");** is valid and outputs *Hello World.*

6.  New lines are not allowed in string litereal function calls.\
    Example:
    ```
    printf("Hello
                      World");** // Invalid and not allowed
    ```
7.  String literals are stored in the read only memory and cannot be modified.