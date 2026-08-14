# How to explicitly make compiler warnings an error and stop the compilation in case of compilation warnings?

1.  We do a compilation of the code using the gcc or cc commands in the terminal.
2.  When the code has an error in compilation, it stops the process at that time and does not produce the executable file.
3.  Sometimes, the compiler provides a warning and asks to resolve it because these small warnings can cause big operational issues in the executable file.
4.  The code does get compiled, and an executable file is also generated in case of warnings, but leaving warnings unresolved in the code is not acceptable.
5.  To stop the compilation due to warnings have to use the **-Werror** GCC flag in the compilation command. It will show the warning, but the code will not be compiled.

Example:
```
gcc /d3_main_function_argc_and_argv_with_different_data_types.c -o program -Werror
```
Output:
```
mayank@MPC-FW-LAP11:/media/mayank/Data/Learnings/C_Programs/D1$ cc ./d3_main_function_argc_and_argv_with_different_data_types.c -o program -Werror
./d3_main_function_argc_and_argv_with_different_data_types.c: In function 'main':
./d3_main_function_argc_and_argv_with_different_data_types.c:9:21: error: format '%s' expects argument of type 'char *', but argument 3 has type 'const int *' [-Werror=format=]
    9 |         printf("%d %s\n", i+1, arguments[i]);
      |                    ~^          ~~~~~~~~~~~~
      |                     |                   |
      |                     char *              const int *
      |                    %ls
cc1: all warnings being treated as errors
```