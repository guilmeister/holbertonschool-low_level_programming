#include "holberton.h"

/**
 * print_number - prints integers
 *
 * @n: value from main
 *
 * Return: Always 0 (Success)
 */

void print_number(int n)
{

if (n == 0)
_putchar(n);

if (n < 0)
{

_putchar('-');
n = -n;

}

if (n / 10)
print_number(n / 10);

_putchar (n % 10 + '0');

}
