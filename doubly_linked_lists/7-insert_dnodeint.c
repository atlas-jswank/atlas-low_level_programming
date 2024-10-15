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
	unsigned int i = 0;
	dlistint_t *current = *h;
	dlistint_t *new;

	if(current == NULL)
		return (NULL);

	if(idx == 0)
		return (add_dnodeint(h, n));
	
	for(i = 0; current != NULL && i < idx-1; i++)
		current = current->next;

	if(current->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;

	current->next->prev = new;
	current->next = new;
	
	return (new);
}
