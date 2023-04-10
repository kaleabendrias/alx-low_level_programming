#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - allocates 0 to all element in the array.
 * @width: width of the array.
 * @height: height of the array.
 * Return: pointer to 2D array.
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	if (width < 0 || height < 0)
		return (0);
	if (width == 0 && height == 0)
		return (0);
	int **g = malloc(sizeof(int *) * height);

	if (g == NULL)
	{
		free(g);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		g[i] = malloc(sizeof(int) * width);
		if (g[i] == NULL)
		{
			free(g[i]);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}
	}
	return (g);
}

