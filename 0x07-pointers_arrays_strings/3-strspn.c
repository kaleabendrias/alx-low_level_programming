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
	int count;

	count++;
	while (s[count] != '\0')
	{
		if (strchr(accept, s[count]) != NULL)
		{
			count++;
		}
		else
		{
			return (count);
		}
	}
	return (i);
}

