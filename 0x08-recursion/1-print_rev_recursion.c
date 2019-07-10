/**
 * _print_rev_recursion - print reverse string
 *
 * @s: value from main
 *
 * Return: reverse string
 */

#include "holberton.h"

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);

}
