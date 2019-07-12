#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: counter
 * @argv: array for stored variables
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);

}
