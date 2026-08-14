# Why int main function without a return statement not give any error?

1.  Usually, C compilers assume the return statement even when the statement is not added explicitly.
2.  Under C99, the above rule was implemented, which allowed the main function to be executed without any return statements. Please note that the main function is a special case, and the same rule does not apply to other user-defined functions.
3.  The C versions before C99 do not give the main function any special treatment. To test tried compiling the C program using the GCC flags.
4.  Using **-std** GCC flag was able to compile the C program with previous versions of the C programming language. For example, compiled the code with the -std=C89 flag to compile the C program with C89 based compiler, but it was also not giving any errors in the absence of a return statement in the main function.
5.  According to GCC, the non-void main function reaching the end of the function without any return statement is an undefined behavior.
6.  GCC compiler will not give any error or warning in the compilation unless warning or error flags are used for compiling.

Reference [GCC](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)