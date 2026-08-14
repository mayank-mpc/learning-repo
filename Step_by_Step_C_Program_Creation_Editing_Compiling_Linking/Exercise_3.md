# What are intermediate files in the C language?

1. The intermediate files are the temporary output files produced by the compiler during the build process before the final executable is created.

| Stage            | Intermediate File   | Extension                                     | Contains                                                                                                            |
|------------------|---------------------|-----------------------------------------------|---------------------------------------------------------------------------------------------------------------------|
| Preprocessing    | Preprocessed source | .i                                            | Pure C code with: • All macros expanded • All headers included • All conditional blocks resolved • Comments removed |
| Compilation      | Assembly file       | .s                                            | Architecture-specific assembly instructions readable to humans                                                      |
| Assembly         | Object file         | .o                                            | Machine code + metadata: • Unresolved external symbols • Relocation info • Symbol table (function/variable names)   |
| Archiving        | Static library      | .a (Linux) / .lib (WIndows)                   | A bundle of .o files packaged as a single file                                                                      |
| Shared Lib Build | Dynamic library     | .so (Linux) / .dll (WIndows)                  | Machine code designed to be linked at runtime                                                                       |
| Linking          | Final executable    | .exe (Windows default) / .out (Linux default) | Fully linked machine code where: • All external symbols resolved • All addresses fixed • Startup code added         |