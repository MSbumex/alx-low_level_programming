#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point
*
* Return: gives  0 always
*/

int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
		putchar(lower_case);
		putchar("\n");

	return (0);
}
