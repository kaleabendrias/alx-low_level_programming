#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds new node
 * @head: head
 * @str: str
 * Return: Always
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, c;
	list_t *new_str;

	c = 0;
	if (head == NULL)
		return (NULL);
	new_str = malloc(sizeof(list_t));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		c++;
	new_str->len = c;
	new_str->str = strdup(str);
	new_str->next = *head;
	*head = new_str;

	return (new_str);
}

