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
	int filedesc;
	int actualsize = 0;
	char array[1024];
	char *err97 = "Usage: cp file_from file_to\n";
/*	char *err98 = "Error: Can't read from file NAME_OF_THE_FILE";
	char *err99 = "Error: Can't write to \n";*/
	char *err100 = "Error: Can't close fd FD_VALUE\n";

	if (ac != 3)
	{	write(STDERR_FILENO, err97, 29);
		exit (97);
	}
	filedesc = open(av[1], O_RDONLY);
	if (filedesc == -1)
	{	write(STDERR_FILENO, err100, 32);
		exit (100);
	}
	actualsize = read(filedesc, array, 1024);
	close(filedesc);

	filedesc = open(av[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);

	if (filedesc == -1)
	{	write(STDERR_FILENO, err100, 32);
		exit (100);
	}
	write(filedesc, array, actualsize);

	close(filedesc);
	return (0);
}
