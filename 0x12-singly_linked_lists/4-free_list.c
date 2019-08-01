#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - free any malloc'd space
 *
 * @head: starting node
 *
 */

void free_list(list_t *head)
{
	list_t *temporary;

	while (head != NULL)
	{
		temporary = head;
		head = head->next;
		free(temporary->str);
		free(temporary);
	}

}
