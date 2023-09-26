#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint -  function that returns the sum of all the data (n)
  * @head: head node
  *
  * Return: if empty return 0
  */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
