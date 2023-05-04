##C - Bit manipulation
Bit manipulation in C involves manipulating individual bits in a binary representation of a number. This can be done using bitwise operators such as & (AND), | (OR), ^ (XOR), ~ (NOT), << (left shift), and >> (right shift).
#Setting a bit at a specific position:
*To set a bit at a specific position, you can use the OR operator |. For example, to set the third bit of a variable x to 1
#Clearing a bit at a specific position:
*To clear a bit at a specific position, you can use the AND operator &. For example, to clear the fourth bit of a variable x
#Toggling a bit at a specific position:
*To toggle a bit at a specific position, you can use the XOR operator ^. For example, to toggle the second bit of a variable x
#Checking if a bit is set:
*To check if a bit is set at a specific position, you can use the AND operator &. For example, to check if the fifth bit of a variable x is set:
#Shifting bits:
*You can shift the bits of a variable to the left or right using the left shift << and right shift >> operators, respectively. For example, to shift the bits of a variable x two positions to the left:

#Requirements
*General
**Allowed editors: vi, vim, emacs
**All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
**All your files should end with a new line
**This  README.md file, at the root of the folder of the project is mandatory
**Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
**You are not allowed to use global variables
**No more than 5 functions per file
**The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
**You are allowed to use _putchar
**You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
**In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
**The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
**Don’t forget to push your header file
**All your header files should be include guarded
