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

	int i;
	int n = 0;
	char *string;

	for (i = 0; str[i] != '\0'; i++)
		n++;

	string = (char *) malloc((n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	if (string == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		string[i] = str[i];
	}

	string[i] = '\0';

	return (string);

}
