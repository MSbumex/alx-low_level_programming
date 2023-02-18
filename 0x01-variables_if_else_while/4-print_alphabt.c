#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point for lowercase expect e and q
 *
 * Return: always 0 if succesful
 */
int main(void)
{
	char lower, e, q;

	e = 'e';
	q = 'q';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != e &&  lower != q)
		putchar(lower);
	}
	putchar('\n');

	return (0);
}
