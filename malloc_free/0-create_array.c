#include <stdlib.h>
/**
 * *create_array - function that created an array of char
 * @size: size 
 * @c: initial char
 * Return: NULL if size 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return NULL;

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return NULL;

	for (i = 0; i < size; i++)
		array[i] = c;

	return array;
}
