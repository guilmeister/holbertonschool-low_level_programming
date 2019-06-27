#include "holberton.h"

/**
 * print_square - prints square based on size given
 *
 * @size: value from main
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{

int x;
int y;

if (size <= 0)
_putchar('\n');

else
{

for (x = 1; x <= size; x++)
{

for (y = 1; y <= size; y++)
{
_putchar('#');
}

_putchar('\n');

}

}

}
