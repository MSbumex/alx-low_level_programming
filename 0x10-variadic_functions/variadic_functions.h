#ifndef main_h
#define main_h
/**
 * main - declaration for the prototype
 * This is header file containing prototypes of all functions created in
 * 0x10. C - Variadic functions  and tasks and
 * the prototype of the function _putchar included;
*/
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
