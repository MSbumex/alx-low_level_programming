#ifndef main_h
#define main_h
#include <stdlib.h>
/**
 * main - declaration for the prototype
 * This is header file containing prototypes of all functions created in
 * 0x15. C - File I/O and tasks and
 * the prototype of the function _putchar included;
 */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif

