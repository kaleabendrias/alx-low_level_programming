#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - realocates new size to old size.
 * @ptr: pointer to old varible.
 * @old_size: size of the old variable.
 * @new_size: size of new varible.
 * Return: new pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *k;
	int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	k = malloc(new_size);
	if (k == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; (unsigned int)i < old_size; i++)
		{
			((char *)k)[i] = ((char *)ptr)[i];
		}
	}
	return (k);
}

