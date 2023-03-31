#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * list_len -  function that returns the number of elements
  * in a linked list_t list.
  * @h: A linked list
  * Return: number of elements of a list(number of nodes as size_t)
  */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

