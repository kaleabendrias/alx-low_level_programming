#include "lists.h"

/**
 * list_len - returns length
 * @h: argument
 * Return: Always
 */

size_t list_len(const list_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (0);
	while(h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}

