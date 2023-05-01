#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: head
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}

