Requirements
All  files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
not allowed to use global variables
No more than 5 functions per file
not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header
Bash
The first line of all your files should be exactly #!/bin/bash
A README.md file, at the root of the folder of the project, describing what each script is doing
All your files must be executable
Project - 0x09. C - Static libraries
Static libraries are just collections of object files that are linked into 
the program during the linking phase of compilation, and are not relevant during runtime.
 
create a libmy file - ar rcs libmy.a
copy all .o files into libmy.a file - ar rcs libmy.a *o
to  list, object files or content  in the library use -:  ar -t libmy.a
lists each symbol's symbol value, symbol type, and symbol name from object files.-:  nm libmy.a
