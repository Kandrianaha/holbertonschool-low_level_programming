#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) of a distlint_int list
 * @head: pointer to the head of a dlistint_int
 * Return: the sum of all (n) values, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
