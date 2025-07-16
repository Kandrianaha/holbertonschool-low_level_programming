#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an inetger
 * @array: array to search through
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: the index of the first element for which cmp does not return 0,
 * or -1 if not element matches or if size <= 0 or array is NULL
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
