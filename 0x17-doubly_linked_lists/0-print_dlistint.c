#include "lists.h"

/**
 * print_list - print the values inside the list given
 *
 * @h: value passed main
 *
 * Return: count
 */

size_t print_dlistint(const dlistint_t *h)
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
