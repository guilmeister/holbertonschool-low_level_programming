#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - delete head and print data of deleted head
 *
 * @head: starting node
 *
 * Return: temporary
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int temporary;

	new = *head;
	*head = (*head)->next;
	temporary = new->n;
	free(new);

	return (temporary);
}
