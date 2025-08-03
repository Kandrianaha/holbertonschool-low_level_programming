#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of doubly linked list
 * @idx: Index of the list where the new node should be added
 * @n: Integer value to store in the new node
 * Return: Address of new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (!h)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL; 
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
		{
			(*h)->prev = new_node;
			*h = new_node;
			return (new_node);
		}
	}

	current = *h;
	for (i = 0; current && i < idx - 1; i++)
		current = current->next;

	if (!current)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	if (current->next)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
