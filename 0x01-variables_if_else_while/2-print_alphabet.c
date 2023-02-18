#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point
*
* Return: gives  0 always
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar("%c \n", i);

	return (0);
}
