#include "main.h"
#include <stddef.h>

/**
 * _strstr - serachs for word.
 * @haystack: ptr to first word.
 * @needle: ptr to the second string.
 * Return: Always.
 */

char *_strstr(char *haystack, char *needle)
{
	char *x, *y, *z;

	while (*haystack != '\0')
	{
		z = haystack;
		x = haystack;
		y = needle;
		while (*y != '\0' && *x == *y)
		{
			x++;
			y++;
		}
		if (*y == '\0')
		{
			return (z);
		}
		haystack++;
	}
	return (NULL);
}

