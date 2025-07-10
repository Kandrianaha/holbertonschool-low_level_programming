#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return copy;
}
