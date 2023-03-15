#ifndef main_h
#define main_h
/**
 * main - declaration for the prototype
 * This is header file containing prototypes of all functions created in
 * 0x0B. C - malloc, free and tasks and
 * the prototype of the function _putchar included;
 */
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
#endif
