#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: The head of the dlistint_t list.
 * @index: node index to return
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *current = head;

	while(current != NULL && i < index)
    {
        current = current->next;
        i++;
    }
    return (current);
}
