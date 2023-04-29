#include "lists.h"

/**
 * sum_listint - sum of all datas
 * @head: head
 * Return: Always
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
