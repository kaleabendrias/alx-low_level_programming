#include "main.h"

/**
 * _strpbrk - locates a character.
 * @s: pointer to string.
 * @accept: 2nd string.
 * Return: pointer to the char.
 */

char *_strpbrk(char *s, char *accept)
{
	int count;

	count = 0;
	while (s[i] != '\0')
	{
		if (strchr(accept, s[count]) != NULL)
		{
			return (&s[count]);
		}
		count++;
	}
	return (NULL);
}
