#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - replaces calloc.
 * @nmemb: number of elements.
 * @size: size in bytes.
 * Return: memory allocated.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	k = malloc(nmemb * size);
	if (k == NULL)
		return (NULL);
	return (k);
}

