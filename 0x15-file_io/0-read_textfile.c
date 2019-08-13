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
	ssize_t checker = 0;
	ssize_t actualsize = 0;
	char array[2000];

	if (filename == NULL)
		return (0);

	buffer = open(filename, O_RDONLY);

	if (buffer == -1)
		return (0);

	actualsize = read(buffer, array, letters);

	if (actualsize == -1)
		return (0);

	close(buffer);
	buffer = open(filename, O_CREAT | O_WRONLY, 0600);

	if (buffer == -1)
		return (0);

	checker = write(2, array, actualsize);

	if (checker == -1 || checker != actualsize)
		return (0);

	close(buffer);

	return (actualsize);
}
