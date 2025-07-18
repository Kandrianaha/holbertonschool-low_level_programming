#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to rpint
 * Return: Always success (0)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
