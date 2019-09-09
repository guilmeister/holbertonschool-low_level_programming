#include "holberton.h"

/**
 * print_line - prints line
 *
 * @n: value from main
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{

int x;

if (n > 1)
{

for (x = 1; x <= n; x++)
_putchar('_');

_putchar('\n');

}

else
_putchar('\n');


}
