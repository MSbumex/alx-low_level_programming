#include "main.h"

/**
  * print_line - func to draws a straight line in the  terminal
  * @n:  is the number of times the character _ should be printed
  *
  * Return: empty
  */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
