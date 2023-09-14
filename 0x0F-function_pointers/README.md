files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
not allowed to use global variables
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called function_pointers.h
All your header files should be include guarded

Project: 0x0F. C - Function pointers

A useful technique is the ability to have pointers to functions. Their declaration is easy: write the declaration as it would be for the function, say

int func(int a, float b);
and simply put brackets around the name and a * in front of it: that declares the pointer. Because of precedence, if you don't parenthesize the name, you declare a function returning a pointer:

/* function returning pointer to int */
int *func(int a, float b);

/* pointer to function returning int */
int (*func)(int a, float b);

