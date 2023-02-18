#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point l single digit numbers of base 10 starting from 0
 *
 * Return: gives 0 always success
 */
int main(void)
{
	int num;

	for (num = '0'; num < '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
