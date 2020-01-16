#include "search_algos.h"

/**
 * binary_search - binary search of an array
 *
 * @array: array given from main
 * @size: size of the array
 * @value: value to be searched
 * Return: value if found, -1 if not
 */

int binary_search(int *array, size_t size, int value)
{
	int first, middle, last, x;

	first = 0;
	last = size - 1;
	middle = (first + last) / 2;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		printf("Searching in array: ");
		for (x = first; x < last; x++)
			printf("%d, ", array[x]);
                printf("%d\n", array[x]);

		if (array[middle] < value)
			first = middle + 1;

		else if (array[middle] == value)
			return (middle);

		else
			last = middle - 1;

		middle = (first + last) / 2;
	}
	return (-1);
}
