#include "lists.h"

/**
 * delete_nodeint_at_index - delets node
 * @head: head
 * @index: index
 * Return: Always
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	prev = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (prev->next == NULL)
			return (-1);
		prev = prev->next;
	}
	if (prev->next == NULL)
		return (-1);
	temp = prev->next;
	prev->next = temp->next;
	free(temp);
	return (1);
}

