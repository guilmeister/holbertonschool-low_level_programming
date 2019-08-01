#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - counts string length
 *
 * @s: value from add_node
 *
 * Return: counter
 */

int _strlen(const char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		counter++;

	return (counter);
}

/**
 * add_node_end - add new node at end
 *
 * @head: starting node
 * @str: value printed
 *
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last = *head;
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->len = _strlen(str);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
}
