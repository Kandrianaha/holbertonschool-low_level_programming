#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - calculate the sum of a set of numbers
 * @n: constant
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ag;
	unsigned int sum = 0;

	va_start (ag, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ag, int);
	}

	va_end(ag);
	return (sum);
}
