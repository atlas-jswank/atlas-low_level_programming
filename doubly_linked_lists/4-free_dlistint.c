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

	while (current != NULL)
	{
		if(current->prev != NULL)
			free(current->prev);

		if(current->next == NULL)
			free(current);

		current = current->next;		
	}
}
