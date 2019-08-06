#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

listint_t *add_nodeint(listint_t **head, const int n);

/**
 * add_nodeint - add new node at beginning
 *
 * @head: starting node
 * @n: value printed
 *
 * Return: new
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

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

	if (idx != 0 && (head == NULL || (*head) == NULL))
		return (NULL);

	if (idx == 0 && (head == NULL || (*head) == NULL))
	{	new = add_nodeint(head, n);
		return (new);
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (idx == 0 && (head != NULL || (*head) != NULL))
	{
		new->next = (*head);
		(*head) = new;
		(*head)->n = n;
		return (*head);
	}

	for (x = 0; x < idx - 1 && temporary != NULL; x++)
		temporary = temporary->next;

	if (temporary == NULL)
	{	free(new);
		return (NULL);
	}

	new->next = temporary->next;
	temporary->next = new;
	new->n = n;

	return (new);
}
