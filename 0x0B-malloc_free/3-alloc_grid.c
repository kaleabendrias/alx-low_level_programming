#include "main.h"
#include <stddef.h>

/**
 * alloc_gird: allocates 0 to all element in the array.
 * @width: width of the array.
 * @height: height of the array.
 * @Return: pointer to 2D array.
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **g = malloc(sizeof(int) * height);
	for (i = 0; i< height; i++)
	{
		g[i] = malloc(sizeof(int) * width);
		for (int j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}
	}
	return (g);
}

