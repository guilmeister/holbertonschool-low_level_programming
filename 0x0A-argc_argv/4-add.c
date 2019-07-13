#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
			sum = sum + atoi(argv[i]);

		else if (sizeof(argv[i]) != 4)
		{
			printf("Error\n");
			return (1);
		}
	}


	printf("%d\n", sum);

	return (0);

}
