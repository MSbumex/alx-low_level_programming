#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: How many bit flips are needed to equal m for n
 * @m: number to set other equal
 * Return: The number of fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_tag = 0, num_count = 0;

	num_tag = n ^ m;
	while (num_tag)
	{
		if (num_tag & 1)
			num_count++;

		num_tag >>= 1;
	}

	return (num_count);
}
