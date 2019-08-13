#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

int stringcounter(char *s);
/**
 * stringcounter - count string
 *
 * @s: string passed
 *
 * Return: x
 */

int stringcounter(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;

	return (x);
}

/**
 * create_file - create a file
 *
 * @filename: filename to be read and write
 * @text_content: contents of file
 *
 * Return: actualsize
 */

int create_file(const char *filename, char *text_content)
{
	int buffer;
	int arraysize = 0;
	ssize_t checker = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	buffer = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (buffer == -1)
		return (-1);

	arraysize = stringcounter(text_content);

	checker = write(buffer, text_content, arraysize);

	if (checker == -1)
		return (-1);

	close(buffer);
	return (1);
}
