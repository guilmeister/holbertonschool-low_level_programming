#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 *
 * @head: starting node
 * @index: specific element to delete
 *
 * Return: 1 if successful, otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x;
	dlistint_t *temporary, *last, *next;

	if ((*head) == NULL || head == NULL)
		return (-1);
	temporary = *head;
	last = *head;
	if (index == 0)
	{	*head = temporary->next;
		if ((*head) != NULL)
			(*head)->prev = NULL;
		free(temporary);
		return (1);
	}
	while (last->next != NULL)
		last = last->next;
	for (x = 0; x < index - 1 && temporary != NULL; x++)
		temporary = temporary->next;
	if (temporary == NULL || temporary->next == NULL)
		return (-1);
	next = temporary->next->next;
	free(temporary->next);
	temporary->next = next;
	if (next != NULL)
		next->prev = temporary;
	return (1);
}
