#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

int pop_listint(listint_t **head)
{
	listint_t *new;
	int temporary;

/*	temporary = (*head)->next;
	new = (*head);
	(*head) = temporary;
	free(new);

	return ((*head)->n);*/

	new = *head;
	*head = (*head)->next;
	temporary = new->n;
	free(new);
	return (temporary);
}
