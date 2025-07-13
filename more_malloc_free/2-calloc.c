#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * calloc - allocates memory for an array of elements
 * @nmemb: number of elements in the array
 * @size: size of each elements in bytes
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalSize = nmemb * size;

	void* memory = malloc(totalSize);

	if (memory == NULL)
	{
		printf("Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}

	memset(memory, 0, totalSize);

	return memory;
}
