#include "lists.h"

/**
 * add_dnodeint_end - add new node at end
 *
 * @head: starting node
 * @n: value printed
 *
 * Return: new
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;
	new->prev = last;
	new->next = NULL;

	return (new);
}
