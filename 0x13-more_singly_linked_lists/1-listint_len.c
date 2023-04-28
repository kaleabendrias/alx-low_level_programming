#include "lists.h"

/**
 * listint_len - returns num
 * @h: arg
 * Return: always
 */

size_t listint_len(const listint_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}

