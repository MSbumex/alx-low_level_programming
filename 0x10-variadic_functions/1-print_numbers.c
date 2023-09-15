#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - function that prints numbers
  * @separator:  the string to be printed between numbers
  * * @n: the number of integers passed to the function
  *
  * Return: ...
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vprint;

	va_start(vprint, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(vprint, int));
	}

	va_end(vprint);
	putchar(10);
}
