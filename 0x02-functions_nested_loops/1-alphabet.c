#include"main.h"
/**
*main header- declaring the prototype function
*main- entry point
*Return: 0 always
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
