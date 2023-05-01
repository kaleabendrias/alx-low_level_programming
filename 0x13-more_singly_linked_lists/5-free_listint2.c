#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: head
 * Return: none
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
}

