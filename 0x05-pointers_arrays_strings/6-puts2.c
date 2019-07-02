#include "holberton.h"

/**
 * puts2 - prints even
 *
 * @str: value from main
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{

int x;

for (x = 0; str[x] != '\0'; x++)
{

if (x % 2 == 0)
_putchar(str[x]);

else if (x % 2 == 1)
_putchar(str[x]);

}

_putchar('\n');
}
