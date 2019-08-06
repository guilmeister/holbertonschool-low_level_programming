#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - reverse list
 *
 * @head: starting node
 *
 * Return: new
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = (*head);
	listint_t *next;

	if (head == NULL || (*head) == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	while (current->next != NULL)
	{
		next = current->next;
		current->next = next->next;
		next->next = (*head);
		(*head) = next;
	}
	return (*head);
}
