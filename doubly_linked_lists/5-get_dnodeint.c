#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t list
 * @head: pointer to the head of dlistint_t
 * @index: index of the node to retrive
 * Return: pointer to the nth node, NULL if inexistable
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}

		current = current->next;
		count++;
	}

	return (NULL);
}
