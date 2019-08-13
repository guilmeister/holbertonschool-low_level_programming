#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - read and write textfile
 *
 * @filename: filename to be read and write
 * @letters: size limit
 *
 * Return: actualsize
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int buffer;
	int actualsize = 0;
	char array[1024];

	if (filename == NULL)
		return (0);

	buffer = open(filename, O_RDONLY);

	if (buffer == -1)
		return (0);

	actualsize = read(buffer, array, letters);
	close(buffer);
	buffer = open(filename, O_CREAT | O_WRONLY, 0600);

	if (buffer == -1)
		return (0);

	write(2, array, actualsize);
	close(buffer);

	return (actualsize);
}
