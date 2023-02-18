#include <stdio.h>
#include <ctype.h>

/**
 * main- entry point to print upper  case letter
 *
 * Return: give 0 always for successful
 */
int main (void)
{
	char lower_c, upper_c;

	for (lower_c = 'a'; lower_c <= 'z'; lower_c++){
		putchar(lower_c);
	}

	for (upper_c = 'A'; upper_c <= 'Z'; upper_c++){

		putchar(upper_c);
	}
	putchar('\n');


	Return (0);
}	
