#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 * Return: 0 to return if sucess
 */
int main(void)
{
	char str[7] = "putchar";
	int i = 0;

	while (str[i] <= 7)
	{
		_putchar (str[i]);
	}
	_putchar("\n");

	return (0);

}
