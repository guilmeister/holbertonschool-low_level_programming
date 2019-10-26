#include "sort.h"

/**
 * insertion_sort_list - sorts doubly linked list in ascending order
 * @list: linked list given from main
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *sort;
	listint_t *next;
	listint_t *current = *head;

	while (current != NULL)
	{
		next = current->next;

		while (current->next != NULL && current->next->n < current->n)
		{
			current = current->next;
		}
		
		current = next;
	}

}
