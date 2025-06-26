#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string 
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[j] != '\0')
	{
		j++;
	}

	j--;

	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j++;
	}
}
