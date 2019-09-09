#include "holberton.h"

/**
 * puts_half - print second half of string
 *
 * @str: value from main
 *
 */

void puts_half(char *str)
{
int x;
int counter = 0;

while (str[counter] != '\0')
{
counter++;
}

if (counter % 2 == 0)
{
for (x = 0; str[x] != '\0'; x++)
{
if (x >= counter / 2)
_putchar(str[x]);
}
_putchar('\n');
}

else
{
counter = counter + 2;
for (x = 0; str[x] != '\0'; x++)
{
if (x >= counter / 2)
_putchar(str[x]);
}
_putchar('\n');
}
}
