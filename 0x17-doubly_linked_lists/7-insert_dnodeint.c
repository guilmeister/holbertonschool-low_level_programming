#include "lists.h"

/**
 * insert_dnodeint_at_index - add new node at index
 *
 * @h: starting node
 * @idx: where to insert value
 * @n: value printed
 *
 * Return: new
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *insert = *h;
	dlistint_t *last = *h;
	unsigned int i;

	while (last->next != NULL)
		last = last->next;
	for (i = 0; i <= idx - 1; i++)
	{
		if (insert == NULL)
			break;
		insert = insert->next;
	}
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else if (insert == last)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	else if (insert != NULL)
	{
		new = malloc(sizeof(dlistint_t));
		new->n = n;
		new->next = insert->next;
		new->prev = insert;
		if (insert->next != NULL)
			insert->next->prev = new;
		insert->next = new;
	}
	return (new);
}
