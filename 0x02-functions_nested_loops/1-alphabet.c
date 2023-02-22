#include"main.h"
/**
 * print_alphabet - Check description
 * Description:  to prints the alphabet in lowercase followed by a new line
 * Return: Nothing
 */

void print_alphabet(void)
{
char low_c;

for (low_c = 'a'; low_c	<= 'z'; low_c++)
{
	_putchar(low_c);
}
_putchar('\n');
}
