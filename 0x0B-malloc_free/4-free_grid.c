#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free memory from grid
 *
 * @grid: value of main
 * @height: value of main
 *
 * Return: buff
 */

void free_grid(int **grid, int height)
{

	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);

}
