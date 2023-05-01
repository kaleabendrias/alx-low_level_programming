#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node
 * @head: head
 * @idx: idx
 * @n: n
 * Return: Always
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	prev = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (prev == NULL)
		{
			free(new);
			return (NULL);
		}
		prev = prev->next;
	}
	if (prev != NULL)
	{
		new->next = prev->next;
		prev->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}

