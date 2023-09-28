#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: The number to set bit in
 * @index: The index to set bit at
 * where index is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}


