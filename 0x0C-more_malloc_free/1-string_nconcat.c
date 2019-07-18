#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenate 2 strings with n as limit
 *
 * @n: limit
 * @s1: string1 passed
 * @s2: string2 to be concatenated
 * Return: buff
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *buff;
	unsigned int x, y;
	unsigned int s1count = 0;
	unsigned int s2count = 0;
	unsigned int total = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		s1count++;
	for (x = 0; s2[x] != '\0'; x++)
		s2count++;

	if (n >= s2count)
	{
		n = s2count;
		total = s1count + n;
	}
	else
		total = s1count + n;

	buff = malloc((total + 1) * sizeof(char));

	if (buff == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		buff[x] = s1[x];
	for (y = 0; y < n; y++)
	{
		buff[x] = s2[y];
		x++;
	}
	buff[x] = '\0';
	return (buff);
}
