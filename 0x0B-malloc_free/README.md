files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc and free. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h

Project : 0x0B. C - malloc, free
 *malloc(size_t size);
The malloc() function allocates size bytes and returns a pointer to the allocated
memory

free
When the allocated memory is not needed anymore, you must return it to the
operating system by calling the function free.
void free(void *ptr);
The free() function frees the memory space pointed to by ptr, which must have
been returned by a previous call to malloc(), calloc() or realloc().
