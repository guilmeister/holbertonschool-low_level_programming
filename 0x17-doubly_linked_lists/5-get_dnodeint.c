#include "lists.h"

/**
 * get_dnodeint_at_index - return value of given index
 *
 * @head: starting node
 * @index: number to return
 *
 * Return: value if index is found, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
