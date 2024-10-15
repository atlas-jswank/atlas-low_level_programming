#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
	* add_dnodeint - adds a new node at the beginning of a dlistint_t list.
	* @head: The head of the dlistint_t list.
	* @n: The value of the node
	* Return: The number of nodes in the list.
	*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
