#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - set index to flip to 1
 *
 * @n: value from main
 * @index: number to stop
 *
 * Return: int value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
