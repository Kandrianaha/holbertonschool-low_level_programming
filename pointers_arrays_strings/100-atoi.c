#include "main.h"
/** _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer converted to a string
 */
int _atoi(char *s)
{
	int count = 0;
	int sign = 1;
	int evalnum = 0;
	unsigned int finalnum = 0;
	char c;

	while (s[count] != '\0')
	{
		c = s[count];

	if (c >= '0' && c <= '9')	
	{
	evalnum = 1;
	finalnum = (finalnum * 10) + (c - '0');
	}
	else
	{
	if (evalnum == 1)
	{
	break;
	}
}

if (evalnum == 0 && s[count] == '-')
{
sign *= -1;
}

count++;
}

return (sign * finalnum);
}
