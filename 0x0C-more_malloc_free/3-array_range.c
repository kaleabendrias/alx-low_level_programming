#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - create memo for array of intigers.
 * @min: starting point.
 * @max: end point.
 * Return: Always int.
 */

int *array_range(int min, int max)
{
	int *k, i;

	if (min > max)
		return (NULL);
	k = malloc(sizeof(int) * (max - min + 1));
	if (k == NULL)
		return (NULL);
	for (i = 0; i < (max - min) + 1; i++)
		k[i] = min + i;
	return (k);
}
