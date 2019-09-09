#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - create an array of integers
 *
 * @min: limit start
 * @max: limit end
 *
 * Return: buff
 */

int *array_range(int min, int max)
{

	int x;
	int *buff;

	if (min > max)
		return (NULL);

	buff = malloc((max - min + 1) * sizeof(int));

	if (buff == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
	{
		buff[x] = min;
		min++;
	}

	return (buff);
}
