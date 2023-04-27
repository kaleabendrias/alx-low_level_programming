#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free's list
 * @head: struct
 * Return: Always
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	list_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

