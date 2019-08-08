#include <stdio.h>
#include "holberton.h"

int _pow_recursion(int x, int y);

/**
 * _pow_recursion - calculates x raised to y
 *
 * @x: value from main
 * @y: value from main
 *
 * Return: value of x raised to y
 */

int _pow_recursion(int x, int y)
{

	if (y == 0)
		return (1);

	else if (y < 0)
		return (-1);

	else
		return (x * _pow_recursion(x, y - 1));

}

/**
 * binary_to_uint - return unsigned int value of given binary
 *
 * @b: value from main
 *
 * Return: int value
 */

unsigned int binary_to_uint(const char *b)
{
	int x, i;
	int pow = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (x = i - 1; x >= 0; x--)
	{
		if (b[x] == '1')
			sum = sum + _pow_recursion(2, pow);
		pow++;
	}
	return (sum);
}
