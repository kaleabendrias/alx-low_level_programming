#include "main.h"

/**
 * _strchr - finds the first occuerence of character.
 * @s: string pointer.
 * @c: character to be found.
 * Return: Always s
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return (s);
}

