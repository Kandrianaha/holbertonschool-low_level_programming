#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * calloc - allocates memory for an array of elements
 * @nmemb: number of elements in the array
 * @size: size of each elements in bytes
 * Return: pointer to the allocated memory, NULL if failed.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	unsigned int totalSize;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return NULL;
	
	totalSize = nmemb * size;
	memory = malloc(totalSize);

	if (memory == NULL)
		return NULL;

	for (i = 0; i < totalSize; i++)
		((char *)memory)[i] = 0;

	return memory;
}
