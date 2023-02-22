#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @ld_num:  last digit of a number.
 * Description:  last digit as int number
 * Return: value of the last digit
 */

int print_last_digit(int ld_num)
{
	int ld;

	ld = (ld_num % 10);

	if (ld < 0)
	{
		ld = (-1 * ld);
	}

	_putchar(ld + '0');
	return (ld);
}
