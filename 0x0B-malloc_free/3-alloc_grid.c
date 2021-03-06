#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints an array with value set to 0
 *
 * @height: y limit
 * @width: x limit
 *
 * Return: buff
 */

int **alloc_grid(int width, int height)
{

	int x, y;
	int **buff;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	buff = (int **) malloc(height * sizeof(int *));

	if (buff == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		buff[x] = (int *) malloc(width * sizeof(int));

		if (buff[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(buff[y]);

			free(buff);

			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			buff[x][y] = 0;
		}

	}

	return (buff);

}
