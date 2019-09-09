#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: value from main
 *
 * Return: buff
 */

void *malloc_checked(unsigned int b)
{
	void *buff;

	buff = malloc(b);

	if (buff == NULL)
		exit(98);

	return (buff);
}
