#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - function to test for positive
 * or negative
 * @n: integer
 * if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 *
 *  Return: 0 always
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

}
