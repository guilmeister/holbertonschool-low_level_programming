#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - program copy contents of file to another file
 *
 * @ac: counter
 * @av: arguments
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int filedesc1, filedesc2, wchecker, cchecker;
	int actualsize = 0;
	char array[1024];
	char *err97 = "Usage: cp file_from file_to\n";

	if (ac != 3)
	{	write(STDERR_FILENO, err97, 29);
		exit(97);
	}
	filedesc1 = open(av[1], O_RDONLY);
	if (filedesc1 == -1)
	{	dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	filedesc2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (filedesc2 == -1)
	{	dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((actualsize = read(filedesc1, array, 1024)))
	{	wchecker = write(filedesc2, array, actualsize);
		if (actualsize == -1)
		{	dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);		}
		if (wchecker == -1)
		{	dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);		}
	}
	cchecker = close(filedesc1);
	if (cchecker == -1)
	{	dprintf(2, "Error: Can't close fd %d\n", cchecker);
		exit(100);
	}
	cchecker = close(filedesc2);
	if (cchecker == -1)
	{	dprintf(2, "Error: Can't close fd %d\n", cchecker);
		exit(100);
	}
	return (0);
}
