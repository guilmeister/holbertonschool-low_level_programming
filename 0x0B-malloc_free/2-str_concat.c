#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: value of main
 * @s2: value of main
 *
 * Return: buff
 */

char *str_concat(char *s1, char *s2)
{

	char *buff;
	int size = 0;
	int x, y, z;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (z = 0; s1[z] != '\0'; z++)
		size++;

	for (z = 0; s2[z] != '\0'; z++)
		size++;

	buff = (char *) malloc((size + 1) * sizeof(char));

	for (x = 0; s1[x] != '\0'; x++)
		buff[x] = s1[x];

	for (y = 0; s2[y] != '\0'; y++)
	{
		buff[x] = s2[y];
		x++;
	}

	buff[x] = '\0';

	return (buff);

}
