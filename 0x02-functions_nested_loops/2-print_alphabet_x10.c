#include "holberton.h"

/**
 * print_alphabet_x10 - Prints alphabet from a-z x10
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{

int counter;
int x;

for (counter = 1; counter <= 10; counter++)
{

for (x = 97; x <= 122; x++)
_putchar (x);

_putchar ('\n');

}

}
