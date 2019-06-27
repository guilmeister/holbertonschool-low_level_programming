#include "holberton.h"

/**
 * print_diagonal - Prints diagonal
 *
 * @n: value from main
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{

int x;
int y;

if (n > 0)
{

for (x = 1; x <= n; x++)
{

for (y = 1; y <= x; y++)
{

if (y != x)
_putchar(' ');

else
_putchar('\\');


}

_putchar('\n');
}

}

else
_putchar('\n');


}
