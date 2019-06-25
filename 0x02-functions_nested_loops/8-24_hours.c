#include "holberton.h"

/**
 * jack_bauer - Prints clock in 24 format
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{

int thousands, hundreds, tens, ones;


for (thousands = 48; thousands <= 50; thousands++)
{

for (hundreds = 48; hundreds <= 57; hundreds++)
{

for (tens = 48; tens <= 53; tens++)
{

for (ones = 48; ones <= 57; ones++)
{

if (!(thousands == 50 && hundreds >= 52))
{

_putchar(thousands);
_putchar(hundreds);
_putchar(':');
_putchar(tens);
_putchar(ones);
_putchar('\n');

}

}

}

}

}

}
