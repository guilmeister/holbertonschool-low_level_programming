#include "holberton.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: value from main
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{

int x;
int counter = 0;


while (s[counter] != '\0')
{
counter++;
}

for (x = counter - 1; x >= 0; x--)
{
_putchar(s[x]);
}

_putchar('\n');
}
