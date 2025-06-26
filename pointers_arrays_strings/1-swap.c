#include "main.h"
/**
 * void swap_int - function that swaps the value of two integers
 * @a: integer one
 * @b: integer two
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
