#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
	* sum_dlistint - sums teh values in a dlistint_t linked list.
	* @head: The head of the dlistint_t list.
	* Return: nth node
	*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
