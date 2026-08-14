# How does a compiler work?

1. Lexical Analysis
   1. The source code is first tested by the compiler's lexer, which breaks the source code into tokens, such as keywords, identifiers, operators, and punctuation.
2. Syntax Analysis
   1. The next step is syntax analysis, where the compiler parser checks the code for syntax errors and ensures that it follows the rules of the programming language.
   2. The compiler generates an Abstract Syntax Tree (AST) that represents the structure of the code.
3. Optimization
   1. The compiler may perform various optimizations to improve the performance of the resulting code.
   2. It is an optional phase of the compiler that removes dead code and arranges the sequence of instructions to boost the program execution.
4. Code generations
   1. The last step is code generation, where the compiler translates the AST into machine-readable code.
   2. The code generator creates assembly language code, which is then translated into binary code that can be executed by the computer.

Reference [GFG](https://www.geeksforgeeks.org/compiler-design/introduction-to-compilers/)
