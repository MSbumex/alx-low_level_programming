#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: A pointer to binary string
 * Return: unsigned integer converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int b_base = 1, out = 0, num_char = 0;

	if (b == NULL)
		return (0);

	while (b[num_char])
		num_char++;

	while (num_char)
	{
		if (b[num_char - 1] != '0' && b[num_char - 1] != '1')
			return (0);

		if (b[num_char - 1] == '1')
			out += b_base;
		b_base *= 2;
		num_char--;
	}
	return (out);
}



