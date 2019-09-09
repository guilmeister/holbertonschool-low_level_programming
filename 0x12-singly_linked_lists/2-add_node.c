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
 * add_node - add new node at beginning
 *
 * @head: starting node
 * @str: value printed
 *
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
