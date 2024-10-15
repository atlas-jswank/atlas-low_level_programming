#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - add node at index
 * @h: The head of the dlistint_t list.
 * @idx: node index
 * @n: value to insert
 * Return: nth node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *current = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}

	new->next = current->next;
	new->prev = current;
	
	current->next->prev = new;
	current->next = new;

	return (new);
}
