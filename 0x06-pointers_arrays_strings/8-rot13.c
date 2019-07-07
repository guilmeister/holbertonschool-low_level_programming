#include "holberton.h"

/**
 * rot13 - rotate 13 characters
 *
 * @a: value from main
 *
 * Return: value of a
 */

char *rot13(char *a)
{

	int outer;
	int inner;
	char rotate[26] =   "nopqrstuvwxyzabcdefghijklm";
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (outer = 0; a[outer] != '\0'; outer++)
	{

		for (inner = 0; alphabet[inner] != '\0'; inner++)
		{
			if (a[outer] == alphabet[inner])
				a[outer] = rotate[inner];
		}

	}

	return (a);

}
