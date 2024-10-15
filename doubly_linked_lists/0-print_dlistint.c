#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 */
size_t print_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
size_t length = 0;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
length++;
}
return (length);
}
