#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory.
 * @b: to be allocated.
 * Return: newly created memo.
 */

void *malloc_checked(unsigned int b)
{
	int *k;

	k = malloc(b);
	if (k == NULL)
		exit(98);
	return (k);
}

