# What are the most commonly used flags by GCC for compilation?

1.  Commonly used GCC flags and their use cases
    1.  Optimization Flags: Optimization flags are used to improve the performance of the compiled code.
        1.  -O1 applies basic optimizations
        2.  -O2 and -O3 offer more advanced optimizations
        3.  -Os optimizes for code size
        4.  -finline-functions, -funroll-loopsflags control function inlining and loop unrolling optimizations, respectively, aiming to eliminate function call overhead and reduce loop iterations.
    2.  Debugging Flags: Debugging flags help in identifying and resolving issues during program development. These flags provide additional information and enable debugging tools to trace and analyze the code.

        -   -g: This flag includes debug symbols in the compiled executable, allowing debuggers to associate source code with machine instructions and variables
        -   -ggdb: This flag enables GCC to generate debug information in a format suitable for the GNU Debugger (GDB).

    3.  Warning flags: Warning flags help identify potential issues, coding errors, or questionable practices in the code. By enabling warning flags, the compiler provides warnings for such cases, allowing developers to improve code quality.

        -   -Wall: This flag enables a comprehensive set of warnings, covering a wide range of potential issues.

        -   -Werror: This flag treats warnings as errors, making the compiler halt the compilation process when encountering a warning. 

    4.  Preprocessor Flags: Preprocessor flags control the behavior of the C preprocessor, which is responsible for processing directives starting with # in the source code.
        1.  -D`: This flag is used to define macros during compilation. For example, -DDEBUG` can be used to define a DEBUG` macro, enabling conditional compilation based on its presence.
        2.  -I`: This flag is used to specify additional directories where header files are located.

The rest of the flags are present in this reference link [Medium](https://medium.com/@promisevector/c-programming-mastering-flags-in-gcc-32809491f340)