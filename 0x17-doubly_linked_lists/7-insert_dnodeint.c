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
	unsigned int x;
	dlistint_t *new;
	dlistint_t *temporary = *h;
	dlistint_t *store;

	if (idx != 0 && (h == NULL || (*h) == NULL))
		return (NULL);
	if (idx == 0 && (h == NULL || (*h) == NULL))
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0 && (h != NULL || (*h) != NULL))
	{
		new->next = (*h);
		(*h) = new;
		(*h)->n = n;
		return (*h);
	}
	for (x = 0; x < idx - 1 && temporary != NULL; x++)
		temporary = temporary->next;
	if (temporary == NULL)
	{
		free(new);
		return (NULL);
	}
	store = temporary->next;
	temporary->next = new;
	new->prev = temporary;
	new->next = store;
	store->prev = new;
	new->n = n;

	return (new);
}
