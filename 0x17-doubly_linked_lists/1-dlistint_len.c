#include "lists.h"

/**
 * dlistint_len - print the values inside the list given
 *
 * @h: value passed main
 *
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
