#include "search_algos.h"
/**
 * linear_search - linear search of an array
 *
 * @array: array given from main
 * @size: size of the array
 * @value: value to be searched
 * Return: value if found, -1 if not
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);

		if (array[x] == value)
			return (x);
	}
	return (-1);
}
