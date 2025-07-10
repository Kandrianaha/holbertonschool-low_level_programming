#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string to duplicate
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *copy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		copy[index] = str[index];
	}

	copy[len] = '\0';

	return (copy);
}
