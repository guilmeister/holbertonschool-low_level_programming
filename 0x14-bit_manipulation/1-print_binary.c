#include "holberton.h"
#include <stdio.h>

void helper_print_binary(unsigned long int n);

/**
 * helper_print_binary - helps in certain conditions
 *
 * @n: value from main
 *
 */

void helper_print_binary(unsigned long int n)
{
	int quotient, product, remainder;

	if (n != 0)
	{
		helper_print_binary(n >> 1);
		quotient = n >> 1;
		product = quotient << 1;
		remainder = n - product;

		if (remainder != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}

/**
 * print_binary - prints n in binary
 *
 * @n: value from main
 *
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		helper_print_binary(n);
}
