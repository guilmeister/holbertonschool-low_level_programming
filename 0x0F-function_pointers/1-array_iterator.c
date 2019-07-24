#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - list elements of the array
 *
 * @array: array to be copied
 * @size: limit
 * @action: function to be called
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL)
		return;

	if (action == NULL)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
