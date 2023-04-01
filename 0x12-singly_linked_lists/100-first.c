#include <stdio.h>

/* constructors in C */
void print_first(void) __attribute__((constructor));

/**
 * print_first - constructor function that prints a message
 * before main function executed
 * Return: Nothing
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

