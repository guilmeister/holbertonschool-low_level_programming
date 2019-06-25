#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints values to 98
 *
 * @n: value from main
 *
 * Return: Always 0 (Success)
 */


void print_to_98(int n)
{

if (n <= 98)
{

for (; n <= 98; n++)
{

if (n == 98)
printf("%d", n);

else
printf("%d, ", n);

}

}

else
{
for (; n >= 98; n--)
{

if (n == 98)
printf("%d", n);

else
printf("%d, ", n);

}

}

printf("\n");

}
