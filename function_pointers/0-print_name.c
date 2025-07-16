#include <stdio.h>

/**
 * print_name -  prints a name using a function pointer.
 * @name: The name of the print
 * @f: function pointer that takes a char pointer as argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
