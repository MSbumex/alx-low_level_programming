#include "main.h"

/**
 * print_alphabet_x10 - function to check _putchar
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char low_c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (low_c = 'a'; low_c <= 'z'; low_c++)
		{
			_putchar(low_c);
		}
	_putchar('\n');
	}
}
