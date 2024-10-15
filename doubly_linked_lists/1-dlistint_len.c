#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
	* dlistint_len - Prints all the elements of a dlistint_t list.
	* @head: The head of the dlistint_t list.
	* Return: The number of nodes in the list.
	*/
size_t dlistint_len(dlistint_t *h)
{
				dlistint_t *current = h;
				size_t length = 0;

				while (current != NULL)
				{
								current = current->next;
								length++;
				}
				return (length);
}
