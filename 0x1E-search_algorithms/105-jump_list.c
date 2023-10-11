#include "search_algos.h"
#include <math.h>

/**
* jump_list - Searches for a value in a sorted list of
* @list: Pointer to the head of the list to search in
* @size: The number of nodes in the list
* @value: The value to search for
*
* Return: A pointer to the first node where value is
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, prev, i;
	listint_t *current;

	if (!list || size == 0)
		return (NULL);

	jump = sqrt(size);
	current = list;
	while (current->next && current->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n >= value)
			break;
		prev = current->index;
		for (i = 0; i < jump && current->next; i++)
			current = current->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, current->index);
	current = list;
	while (current->index < prev && current->index < size)
		current = current->next;
	while (current && current->index <= (size_t)value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
