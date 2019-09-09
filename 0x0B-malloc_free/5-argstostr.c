#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates all the arguments
 * @ac: value of main
 * @av: value of main
 *
 * Return: buff
 */

char *argstostr(int ac, char **av)
{

	int x, y;
	char *buff;
	int size = 0;

	if (ac == 0)
		return (NULL);

	if (av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			size++;

		size++;
	}

	buff = (char *) malloc((size + 1) * sizeof(char));

	if (buff == NULL)
		return (NULL);

	size = 0;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			buff[size] = av[x][y];
			size++;
		}

		buff[size] = '\n';
		size++;
	}

	return (buff);

}
