#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *no = h;
	size_t con = 0;

	while (no)
	{
		printf("%i\n", no->n);
		con++;
		no = no->next;
	}

	return (cont);
}
