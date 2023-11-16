#include "main.h"

/**
 * _abs - function to computes the absolute value of an integer.
 *
 * @abs: The integer to be computed.
 *
 * Description: absolute vlue as int
 *
 * Return: The absolute value of the integer.
 */

int _abs(int abs)
{

	return (abs * ((abs > 0) - (abs < 0)));
}
