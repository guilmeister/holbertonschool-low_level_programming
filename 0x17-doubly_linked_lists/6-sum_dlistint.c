#include "lists.h"

/**
 * sum_dlistint - returns the sum of all elements
 *
 * @head: value passed main
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
