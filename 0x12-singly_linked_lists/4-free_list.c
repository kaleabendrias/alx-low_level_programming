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
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}

