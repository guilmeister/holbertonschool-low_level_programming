/**
 * _puts_recursion - prints string recursively
 *
 * @s: value from main
 *
 */

#include "holberton.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar ('\n');

	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}

}
