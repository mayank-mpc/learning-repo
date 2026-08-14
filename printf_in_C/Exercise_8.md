# What is the difference between %d and %i in printf() function operation?

1.  **%d** specifies signed decimal integer while **%i** specifies integer of various bases.
2.  '**%d**' and '**%i**' behave similarly with printf().
3.  %d and %i behavior is different with scanf(). Here, %d assume base 10 while %i auto detects the base.
4.  **%d** takes an integer value as a signed decimal integer i.e. it takes negative values along with positive values but values should be in decimal otherwise it will print garbage value. Also If the input is in the octal format like 012 then %d will ignore 0 and take input as 12.
5.  %i takes an integer value as an integer value with decimal, hexadecimal, or octal type.\
    To enter a value in hexadecimal format, the value should be provided by preceding "0x" and to enter a value in value in octal format, the value should be provided by preceding "0".
6.  Please note that %i stores data in decimal format even after taking input as Hex and Octal.

Reference [GFG](https://www.geeksforgeeks.org/c/difference-d-format-specifier-c-language/)