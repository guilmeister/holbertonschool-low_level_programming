#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - print the values inside the list given
 *
 * @h: value passed main
 *
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
