#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of arguments passed to the function
 * @c: char
 * @i: int
 * @f: float
 * @s: string
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
			case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
			case 'f':
			printf("%s%f", separator, (float)va_arg(args, double));
			break;
			case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
		default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}

