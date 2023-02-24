#include "main.h"

/**
  * print_square -  function to prints n squares according n number of times
  * @size: The number of squares/number of times
  * Where size is the size of the square
  * If size is 0 or less, the function should print only a new line
  * Use the character # to print the square
  *
  * Return: empty
  */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
