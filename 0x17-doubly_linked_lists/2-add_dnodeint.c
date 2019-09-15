#include "lists.h"

/**
 * add_dnodeint - add new node at beginning
 *
 * @head: starting node
 * @n: value printed
 *
 * Return: 0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);

}
