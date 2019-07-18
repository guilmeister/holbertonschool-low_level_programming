B#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - creates memory allocation for array to 0
 *
 * @nmemb: size of array
 * @size: data size type
 *
 * Return: buff
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *buff;
	unsigned int x;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	buff = malloc(nmemb * size);

	for (x = 0; x < nmemb; x++)
		buff[x] = 0;

	return (buff);
}
