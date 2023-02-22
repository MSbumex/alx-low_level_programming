#include "main.h"
/**
 * main - Entry point and check code
 * print letters
 * Return: 0 to return if sucess
 */
int main(void)
{
	char str[9] = {"_putchar"};
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
