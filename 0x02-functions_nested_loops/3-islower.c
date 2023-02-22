#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	char low_c;
	int i;

	for (low_c = 'a'; low_c <= 'z'; low_c++)
	{
		if (low_c == c)
		{
			i = 1;
		}
	}
	return (i);
}
