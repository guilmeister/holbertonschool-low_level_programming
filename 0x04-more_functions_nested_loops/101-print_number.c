#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * print_number - prints integers
 *
 * @n: value from main
 *
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	unsigned int number2;

	if (n < 0)
	{
		_putchar('-');
		number2 = -n;
	}

	else if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
		number2 = n;

	if (number2 / 10 != 0)
		print_number(number2 / 10);

	_putchar(number2 % 10 + '0');
}
