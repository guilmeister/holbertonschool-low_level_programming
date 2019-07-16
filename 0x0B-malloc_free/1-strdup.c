#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy a given string to an allocated memory
 *
 * @str: string to copy
 *
 * Return: string
 */

char *_strdup(char *str)
{

	int i, n;
	char *string;

	n = 10;
	string = (char *) malloc(n * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		string[i] = str[i];
	}

	return (string);

}
