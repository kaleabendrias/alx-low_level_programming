#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns pointer to the duplicate char.
 * @str: pointer to a char.
 * Return: Always.
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}

