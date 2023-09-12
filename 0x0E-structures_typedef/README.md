 files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.
 not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are printf, malloc, free and exit.
All your header files should be include guarded

Project: 0x0E. C - Structures, typedef

A structure (struct) is a user defined data type available
in C that allows to combine data items of
different kinds. 

typedef
The general rule with the use of typedef is to write out a declaration as if you were declaring variables of the types that you want. Where a declaration would have introduced names with particular types, prefixing the whole thing with typedef means that, instead of getting variables declared, you declare new type names instead. Those new type names can then be used as the prefix to the declaration of variables of the new type.
