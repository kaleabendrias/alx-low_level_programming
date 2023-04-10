#include "main.h"
#include <stdlib.h>

/**
 * free_grid - fress the grids of once occupied memo.
 * @grid: a 2d array.
 * @height: height of the array to be freed.
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

