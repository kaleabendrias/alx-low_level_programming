#include "lists.h"

/**
 * pop_listint - pop
 * @head: head
 * Return: Always
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
