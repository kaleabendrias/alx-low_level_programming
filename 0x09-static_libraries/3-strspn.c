#include "main.h"
#include <stddef.h>

/**
 * _strspn - returns number of occurence.
 * @s: strig pointer.
 * @accept: chars to be counted.
 * Return: Always number.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (len);
		}
	}
	return (len);
}

