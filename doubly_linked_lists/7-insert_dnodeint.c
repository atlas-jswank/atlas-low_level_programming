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
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if(idx == 0){
		new->next = current;
		*h = new;

		current->prev = new;
		return (new);
	}

	while (current != NULL && i < idx-1)
	{
		current = current->next;
		i++;
	}

	if(current == NULL)
		return (NULL);


	new->next = current->next;
	new->prev = current;
	
	if(current->next != NULL)
		current->next->prev = new;
	current->next = new;

	return (new);
}
