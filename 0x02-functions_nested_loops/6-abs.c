#include "holberton.h"

/**
 * _abs - Prints absolute value
 *
 * @n: value from main
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{

int m;

if (n < 0)
{

m = n * -1;
return (m);

}

else
{

if (n == 0)
{

return (0);

}

else
{

return (n);

}

}

}
