#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elemetns
 * @h: element
 * Return: Always
 */

size_t print_listint(const listint_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}

