#include "main.h"

/**
 * _strncat - does act like strcat but
 * @n: bytes
 * @dest: place holder for first string
 * @src: place holder for second string
 * Return: return dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2;
	int i;

	len1 = 0;
	len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i < n; i++)
	{
		if (n < len2)
		{
			dest[i + len1] = src[i];
		}
	}
	return (dest);
}

