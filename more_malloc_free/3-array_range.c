#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of int from min to max
 * @min: min integer
 * @max: max integer
 * Return: pointer to the newly created array, NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return NULL;

	size = max - min + 1;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return NULL;

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return arr;
}
