#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: The number to get bit from
 * @index: The index where the bit get at
 * where index is the index, starting from 0 of the bit you want to get
 * Return: The value of the bit or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_in = 0;

	while (n)
	{
		if (bit_in == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		bit_in++;
	}

	if (index > bit_in && index < 63)
		return (0);

	return (-1);
}
