#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 *
 * @n: value from main
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{

int m;
m = n % 10;

if (n < 0)
m = m * -1;

_putchar (m + '0');
return (m);

}
