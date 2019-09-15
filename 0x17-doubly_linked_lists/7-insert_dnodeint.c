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
	dlistint_t *temp = *h;
	dlistint_t *last = *h;
	unsigned int i;

	while (last->next != NULL)
		last = last->next;
	for (i = 0; i <= idx - 1; i++)
	{
		if (temp == NULL)
			break;
		temp = temp->next;
	}
	if (idx == 0 && (h == NULL || (*h) == NULL))
	{       new = add_dnodeint(h, n);
		return (new);
	}
	if (idx == 0 && (h != NULL || (*h) != NULL))
	{       new = malloc(sizeof(dlistint_t));
		new->next = (*h);
		(*h) = new;
		(*h)->prev = NULL;
		(*h)->n = n;
		return (*h);
	}
	else if (temp == last)
	{       new = add_dnodeint_end(h, n);
		return (new);
	}
	else if (temp != NULL)
	{       new = malloc(sizeof(dlistint_t));
		new->n = n;
		new->next = temp->next;
		new->prev = temp;
		if (temp->next != NULL)
			temp->next->prev = new;
		temp->next = new;
	}
	return (new);
}
