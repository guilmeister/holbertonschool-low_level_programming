#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 - free any malloc'd space
 *
 * @head: starting node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if ((*head) == NULL)
		return;

	while ((*head) != NULL)
	{
		temporary = *head;
		(*head) = (*head)->next;
		free(temporary);
	}
	(*head) = NULL;
}
