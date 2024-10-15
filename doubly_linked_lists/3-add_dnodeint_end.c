#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/* add_dnodeint_end - adds a new node at the end of a dlistint_t list.
	* @head: The head of the dlistint_t list.
	* @n: The value of the node
	* Return: The number of nodes in the list.
	*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = new;
	}

	return (new);
}
