#include <stdio.h>
#include <stdlib.h>

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
	int product;

	for (i = 0; i <= argc; i++)
		;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", product);

	return (0);

}
