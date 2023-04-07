#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates a character.
 * @s: pointer to string.
 * @accept: 2nd string.
 * Return: pointer to the char.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
