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
	int i;

	len1 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i + len1] = src[i];
	}
	return (dest);
}

