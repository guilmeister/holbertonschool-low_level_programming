#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at index
 *
 * @head: starting node
 * @index: specific element to delete
 *
 * Return: 1 if successful, otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *temporary;
	listint_t *next;

	if ((*head) == NULL)
		return (-1);

	if (head == NULL)
		return (-1);

	temporary = *head;

	if (index == 0)
	{	*head = temporary->next;
		free(temporary);
		return (1);
	}

	for (x = 0; x < index - 1; x++)
		temporary = temporary->next;

	if (temporary == NULL || temporary->next == NULL)
		return (-1);

	next = temporary->next->next;
	free(temporary->next);
	temporary->next = next;

	return (1);
}
