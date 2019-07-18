#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

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

	void *buff;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	buff = malloc(nmemb * size);

	_memset(buff, 0, nmemb * size);

	return (buff);
}

/**
 * _memset - fills first n bytes of memory area pointed by constant byte b
 *
 * @s: value from main
 * @b: value from main
 * @n: value from main
 *
 * Return: value of s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
