# Why C does not add newline character implicitly at the end of string in printf function?

1.  The language does not add any thing implicitly in the data unless the developer explicitly add anything.
2.  In printf the strings are raw bytes of data and it is not considered as line unless additional line characters are present in the string and string buffer.
3.  C does not add anything implicitly which causes undefined behaviour in the program.