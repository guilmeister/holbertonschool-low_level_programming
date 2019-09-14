#include "lists.h"

/**
 * print_list - print the values inside the list given
 *
 * @h: value passed main
 *
 * Return: count
 */

size_t print_dlistint(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
