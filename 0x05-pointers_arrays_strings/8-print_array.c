#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints the array
 *
 * @a: value from main
 * @n: value from main
 *
 * Return: Always 0 (Success)
 */


void print_array(int *a, int n)
{

int x;

for (x = 0; x <= n - 1; x++)
{
printf("%d", a[x]);

if (x != n - 1)
printf(", ");
}

printf("\n");
}
