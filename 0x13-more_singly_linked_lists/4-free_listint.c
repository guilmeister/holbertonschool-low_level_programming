#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - free any malloc'd space
 *
 * @head: starting node
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head != NULL)
	{
		temporary = head;
		head = head->next;
		free(temporary);
	}
}
