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
	int i, j, **g;

	if (width < 0 || height < 0)
		return (NULL);
	if (width == 0 && height == 0)
		return (NULL);
	g = malloc(sizeof(int *) * height);

	if (g == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		g[i] = malloc(sizeof(int) * width);
		if (g[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(g[j]);
			free(g);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}
	}
	return (g);
}

