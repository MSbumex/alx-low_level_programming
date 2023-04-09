#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * print_binary - function that prints the binary representation of a number.
  * @n: number to representing in binary
  * Return: Nothing
  */

void print_binary(unsigned long int n)
{
	unsigned int bin = 0;
	int max = 32768; /* 1000 0000 0000 0000 */

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (bin == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			bin = 1;
		}
		max >>= 1;
	}
}
