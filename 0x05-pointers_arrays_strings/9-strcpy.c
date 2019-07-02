#include "holberton.h"

/**
 * _strcpy - copies a string
 *
 * @dest: value from main
 * @src: value from main
 *
 * Return: Always 0 (Success)
 */


char *_strcpy(char *dest, char *src)
{

int x;

for (x = 0; src[x] != '\0'; x++)
{
dest[x] = src[x];
}

return (dest);
}
