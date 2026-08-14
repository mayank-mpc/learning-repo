# Why compiler gives warning when printing '/' escape sequence using the printf function?

1.  This escape character is designated to be used along with special characters which cannot be added directly in the string or string buffer. If it is used without those characters it can cause compilation error or will provide warnings

# Example

1. **printf(" \ ");** // Here the escape sequence character has space in front and back but do not have any special character along with it. Here the compiler will give warning for it.

2. **printf("\");** // Here the esacpe sequence character does not have space in front and back but here a special character is present along with it **\"**. This allows the printf to print double quotes on the standard output but here it will give compilation error because C thinks there is no closing double quote present in the printf function.

3. **printf("\\ \"");** // Here is the correct way to use escape sequence in printf function calls