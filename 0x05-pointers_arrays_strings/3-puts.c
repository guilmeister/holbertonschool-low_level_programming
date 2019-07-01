#include "holberton.h"

/**
 * _puts - prints a string
 *
 * @str: value from main
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{

int x;

for (x = 0; str[x] != '\0'; x++)
{
_putchar(str[x]);
}

_putchar('\n');
}
