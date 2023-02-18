#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: gives 0  Always
 */

int main(void)
{
	char low_c;

	for (low_c = 'z'; low_c	>= 'a'; low_c--)
	{
		putchar(low_c);
	}
		putchar('\n');

	return (0);
}
