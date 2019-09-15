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
	dlistint_t *temporary;
	dlistint_t *next;

	if ((*head) == NULL || head == NULL)
		return (-1);

	temporary = *head;

	if (index == 0)
	{
		*head = temporary->next;
		free(temporary);
		return (1);
	}

	for (x = 0; x < index - 1 && temporary != NULL; x++)
		temporary = temporary->next;

	if (temporary == NULL || temporary->next == NULL)
		return (-1);

	next = temporary->next->next;
	free(temporary->next);
	temporary->next = next;

	return (1);
}
