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

 if(*str != '\0')
 {

for (x = 0; str[x] != '\0'; x = x+2)
{

_putchar(str[x]);

}

}
_putchar('\n');
}
