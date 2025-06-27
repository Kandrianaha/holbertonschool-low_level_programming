#include "main.h"
/**
 * puts_half - prints half a string
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int start;

	while (str[len] != '\0')

		if (len % 2 == 0)
			start = len / 2;
		else
			start= (len - 1) / 2 + 1;

	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
