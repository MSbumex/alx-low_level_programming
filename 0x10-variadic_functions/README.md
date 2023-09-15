files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use the following macros: va_start, va_arg and va_end
You are allowed to use _putchar
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called variadic_functions.h
All your header files should be include guarded

Project:0x10. C - Variadic functions
ISO C defines a syntax for declaring a function to take a variable number or type of arguments. (Such functions are referred to as varargs functions or variadic functions.) However, the language itself provides no mechanism for such functions to access their non-required arguments; instead, you use the variable arguments macros defined in stdarg.h
Defining and using a variadic function involves three steps:
Define the function as variadic, using an ellipsis (‘…’) in the argument list, and using special macros to access the variable arguments.
Declare the function as variadic, using a prototype with an ellipsis (‘…’), in all the files which call it
Call the function by writing the fixed arguments followed by the additional variable arguments.
