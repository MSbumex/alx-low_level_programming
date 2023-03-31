#ifndef main_h
#define main_h
/**
 * main - declaration for the prototype
 * This is header file containing prototypes of all functions created in
 * 0x12. C - Singly linked lists  and tasks and
 * the prototype of the function _putchar included;
 */
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
