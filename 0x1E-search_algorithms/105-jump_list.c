#include "search_algos.h"
#include <math.h>

/**
* jump_list - jump searches a singly linked list
* @list: pointer to head node
* @size: size of the list
* @value: value to search for
*
* Return: the node found or NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t i;
	listint_t *current = list;
	listint_t *prev = NULL;

	if (!list)
		return (NULL);

	while (current->n < value && current->next)
	{
		prev = current;
		for (i = 0; i < step && current->next; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	prev ? prev->index : 0, current->index);

	while (prev && prev->index < size && prev->n < value)
	{
		prev = prev->next;
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	}

	if (prev && prev->n == value)
		return (prev);

	return (NULL);
}
