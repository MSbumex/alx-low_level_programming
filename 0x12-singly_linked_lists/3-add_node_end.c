#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a node to the end of linked list
 * @head: pointer to a list_t
 * @str: string to add as node
 * Return: pointer to new element of list, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node, *temp;
	int len = 0;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);

	while (str[len])
		len++;

	add_node->len = len;
	add_node->str = strdup(str);
	if (*head == NULL)
	{
		add_node->next = *head;
		*head = add_node;
	}
	else
	{
		add_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = add_node;
	}
	return (add_node);
}

