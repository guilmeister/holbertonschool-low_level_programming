#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - list elements of the array and compare
 *
 * @array: array to be copied
 * @size: limit
 * @cmp: function to be called
 *
 * Return: error or success (-1/1)
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int x;

	if (size <= 0)
		return (-1);

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}

	return (-1);
}
