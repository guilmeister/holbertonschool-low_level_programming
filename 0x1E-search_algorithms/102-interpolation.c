#include "search_algos.h"
/**
 * interpolation_search - interpolation search of an array
 *
 * @array: array given from main
 * @size: size of the array
 * @value: value to be searched
 * Return: value if found, -1 if not
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low, high, position;

	low = 0;
	high = size - 1;
	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);

			return (-1);
		}
		position = low + (((double)(high - low) /
				   (array[high] - array[low])) *
				  (value - array[low]));
		if (position < low || position > high)
		{
			printf("Value checked array[%d] is out of range\n",
			       position);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n",
		       position, array[position]);
		if (array[position] == value)
			return (position);
		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;
	}
	return (-1);
}
