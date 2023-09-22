#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
	free(head);
}

