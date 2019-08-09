#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits - number of bits to flip
 *
 * @n: value from main
 * @m: value from main
 *
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned long int count = 0;

	flip = n ^ m;

	while (flip)
	{
		if (flip & 1)
			count++;

		flip = flip >> 1;
	}
	return (count);
}
