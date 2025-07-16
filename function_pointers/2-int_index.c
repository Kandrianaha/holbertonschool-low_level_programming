#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an int
 * @array: array to int
 * @size: size of int
 * @cmp: function to pointer
 * Result: index of first element, if NULL return 0;
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
