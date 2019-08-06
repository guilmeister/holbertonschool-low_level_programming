#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t listint_len(const listint_t *h);

/**
 * insert_nodeint_at_index - add new node at index
 *
 * @head: starting node
 * @idx: where to insert value
 * @n: value printed
 *
 * Return: new
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *temporary = *head;

	if (head == NULL || (*head) == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	for (x = 0; x < idx - 1 && temporary != NULL; x++)
		temporary = temporary->next;

	if (temporary == NULL || temporary->next == NULL)
	{	free(new);
		return (NULL);
	}

	new->next = temporary->next;
	temporary->next = new;
	new->n = n;

	return (new);
}
