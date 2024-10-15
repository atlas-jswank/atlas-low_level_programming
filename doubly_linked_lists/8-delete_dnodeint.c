#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: The head of the dlistint_t list.
 * @idx: node index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;
    dlistint_t *prev, *next;

     if(*head == NULL)
        return (-1);

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

    if(current == NULL)
        return (-1);

    prev = current->prev;
    next = current->next;

    if(index == 0)
        *head = next;

    if(prev != NULL)
        prev->next = next;
    
    if(next != NULL)
        next->prev = prev;
    
    free(current);

    return (0);
}
