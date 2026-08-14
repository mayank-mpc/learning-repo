# In which compilation stages can compilation errors occur?

1.  Pre-processing stage
    1.  Missing headers
    2.  Incorrect Macros
    3.  Improper use of #ifndef and #ifdef
2.  Compilation stage
    1.  Lexical errors
    2.  Syntax errors
    3.  Semantic errors
    4.  Undefined variables
    5.  Type mismatches
    6.  Code optimization errors
3.  Linking stage
    1.  Undefined references
    2.  Multiple symbol definitions
    3.  Missing libraries
    4.  Incorrect linker scripts

# Why errors cannot occur in the assembly stage of compilation?

1.  Errors cannot occur during the assembler stage of the C language because C compilation is a multi-stage process where assembly code generation happens after the compiler has already checked the source code for syntax and semantic errors.
2.  The assembler assumes the input it receives from the compiler is syntactically correct assembly language.
3.  An error at the assembly stage would generally only happen if there was a major bug in the compiler itself, causing it to output invalid assembly code, or if you were manually writing assembly code that contained mistakes.