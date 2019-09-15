#include "lists.h"

/**
 * free_dlistint - free any malloc'd space
 *
 * @head: starting node
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary;

	while (head != NULL)
	{
		temporary = head;
		head = head->next;
		free(temporary);
	}
}
