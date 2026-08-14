# Why was UNIX rewritten in the C language?

1.  UNIX was written in assembly language using the B language. However, B proved to be slow and lacked the necessary features for efficient system programming, especially for the byte-oriented PDP-11 architecture that UNIX was being targeted for.
2.  The key reasons for choosing C language
    1.  C allowed UNIX to be more easily adapted to different hardware platforms with minimal modifications, contributing to its widespread adoption.
    2.  C provided a balance between high-level programming constructs and low-level memory manipulation, making it suitable for writing an operating system kernel and its utilities.
    3.  C promoted a structured approach to programming, making the code more organized, maintainable, and easier to understand than assembly language.
    4.  The development of C and UNIX were intertwined, with the needs of UNIX influencing the features added to C, creating a language specifically tailored for system programming.