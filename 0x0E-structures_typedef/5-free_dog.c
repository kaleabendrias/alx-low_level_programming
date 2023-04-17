#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * free_dog - Entry point.
 * @d: placeholder
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}

