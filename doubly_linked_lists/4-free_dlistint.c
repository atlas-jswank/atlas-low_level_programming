#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
	* free_dlistint - frees a dlistint_t list.
	* @head: The head of the dlistint_t list.
	* Return: nothing
	*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
