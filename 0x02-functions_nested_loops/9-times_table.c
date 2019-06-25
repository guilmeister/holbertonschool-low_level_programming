#include "holberton.h"

/**
 * times_table - Prints the times table
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
int tens, ones, value;

for (tens = 0; tens <= 9; tens++)
{
for (ones = 0; ones <= 9; ones++)
{
value = tens * ones;
if (value / 10 == 0)
{
_putchar(' ');
_putchar(value % 10 + '0');
}
else if (value / 10 == 0 && value % 10 != 0)
{
_putchar(' ');
_putchar(value % 10 + '0');
}
else
{
_putchar(value / 10 + '0');
_putchar(value % 10 + '0');
}
if (!(ones == 9))
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
