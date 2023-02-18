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
	char low_c;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (low_c = 'a'; low_c <= 'f'; low_c++)
	{
		putchar(low_c);
	}
	putchar('\n');
	return (0);
}

