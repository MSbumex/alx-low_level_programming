#include <stdio.h>
#include <math.h>

/**
 * main - main block for entry point
 *  prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
 * Description: to find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
int main(void)
{
	int c;
	long num = 612852475143;

	for (c = (int) sqrt(num); c > 2; c++)
	{
		if (num % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

	return (0);
}
