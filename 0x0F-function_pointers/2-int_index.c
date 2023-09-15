#include <stdlib.h>
#include "function_pointers.h"

/**
  * int_index -returns the index of the first element for
  * which the cmp function does not return 0
  * @array:contain element
  * @size:size is the number of elements in the array
  * @cmp: a pointer to the function to be used to compare value
  *
  * Return:if no element matches, return -1, if size <= 0, return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
