#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - return the bit from the index
 *
 * @n: value from main
 * @index: stopping point
 *
 * Return: value where index wants
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int a[20];
	int x;
	unsigned int y;

	if (index > 32)
		return (-1);

	for (x = 0; n > 0; x++)
	{
		a[x] = n % 2;
		n = n / 2;
	}

	for (y = x; y > index; y--)
		;

	return (a[y]);
}
