# What is conditional compilation?

1.  It is a feature that lets you include or exclude parts of code during the compilation process based on certain conditions. It is handled by the C preprocessor before the actual compilation of code begins.
2.  It is used in the following scenarios
    1.  To compile code on different platforms (eg, Windows or Linux)
    2.  Enable or Disable certain features of the program (eg, Debugging features, Test code)
    3.  To use different code in different environments without changing the source code.

# Why should conditional compilations be used?

1.  Portability: Write code that adapts to different operating systems or hardware platforms.
2.  Debugging: Include additional debugging information or logging in development builds without affecting the production code.
3.  Feature Management: Enable or disable features based on compile-time flags or configurations.
4.  Performance Optimization: Exclude code that is unnecessary for certain builds, reducing the final binary size and improving performance.

# Conditional Compilation Directives

| Directive | Purpose |
|---|---|
| #if | Compile if a condition is true |
| #ifdef | Compile if a macro is defined |
| #ifndef | Compile if a macro is not defined |
| #else | Alternate block if above condition fails |
| #elif | Else if another condition is true |
| #endif | Ends the conditional compilation block |

Reference [Sanfoundry](https://www.sanfoundry.com/c-tutorials-conditional-compilation/)