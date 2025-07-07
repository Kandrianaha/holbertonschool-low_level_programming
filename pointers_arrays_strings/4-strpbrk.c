#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be scanned
 * @accept: string containing the bytes to match
 * Return: pointer to the byte in s matching one of the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
