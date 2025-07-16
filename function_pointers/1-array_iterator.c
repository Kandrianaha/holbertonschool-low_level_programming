#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @size: size of the array
 * @array: pointer to the array
 * @action: pointer to the function
 * Result: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
