#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - set index to flip to 0
 *
 * @n: value from main
 * @index: number to stop
 *
 * Return: int value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n & ~(1UL << index);

	return (1);
}
