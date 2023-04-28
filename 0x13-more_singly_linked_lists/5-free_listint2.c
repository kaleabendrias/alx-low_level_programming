#include "lists.h"

/**
 * free_lisint - frees list
 * @head: head
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}

