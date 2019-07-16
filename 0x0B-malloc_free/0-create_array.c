#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates memory allocation for array
 *
 * @size: size to allocate
 * @c: value from main
 *
 * Return: buff
 */


char *create_array(unsigned int size, char c)
{

	char *buff = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		buff[i] = c;

	if (buff == NULL)
		return (NULL);

	return (buff);
}
