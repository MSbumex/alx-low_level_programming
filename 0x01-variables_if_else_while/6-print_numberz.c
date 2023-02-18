#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point l single digit numbers of base 10 starting from 0
 *
 * Return: gives 0 always success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar (num);
	}
	putchar("\n");
	return (0);
}
