#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add new nide at end
 * @head: head
 *
 * @str: str
 * Return: Always
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i, c;
	list_t *new_str;
	list_t *temp;

	new_str = malloc(sizeof(list_t));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		c++;
	new_str->len = i;
	new_str->str = strdup(str);
	new_str->next = NULL;
	if (*head == NULL)
	{
		*head = new_str;
		return (new_str);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_str;
	return (new_str);
}

