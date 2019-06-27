#include "holberton.h"

/**
 * print_triangle - printing triangle
 *
 * @size: value from main
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{

int x;
int y;
int z;

if (size > 0)
{

for (x = 1; x <= size; x++)
{

for (y = 1; y <= size; y++)
{

z = x - 1;

if (y < size - z)
_putchar(' ');

else
_putchar ('#');

}

_putchar('\n');

}

}

else
_putchar('\n');

}
