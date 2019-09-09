#include "holberton.h"

/**
 * _isupper - Checks for uppercase
 *
 * @c: value from main
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
return (1);

else
return (0);

}
