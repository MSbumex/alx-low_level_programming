#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - func that delete head node of a listint_t
  * @head: head node
  *
  * Return: returns the head node’s data (n). and 0 if empty
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
