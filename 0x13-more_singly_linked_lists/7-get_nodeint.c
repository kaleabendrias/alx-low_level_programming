#include "lists.h"

/**
 * get_nodeint_at_index - returns node
 * @head: head
 * @index: index
 * Return: Always
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	current = head;
	for (i = 0; current != NULL && i < index; i++)
		current = current->next;
	return ((current == NULL || i < index) ? NULL : current);
}
