#include "main.h"
/**
 * _isupper - function that verifies if a character is upper
 * @c: character
 * Return: 1 when uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
