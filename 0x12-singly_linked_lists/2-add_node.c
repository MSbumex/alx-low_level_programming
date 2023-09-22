#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int length = 0;

	if (head != NULL && str != NULL)
	{
		node = malloc(sizeof(list_t));
		if (node == NULL)
			return (NULL);

		while (str[length])
		length++;
		node->len = length;
		node->str = strdup(str);
		node->next = *head;
		*head = node;
		return (node);
	}

return (0);
}

