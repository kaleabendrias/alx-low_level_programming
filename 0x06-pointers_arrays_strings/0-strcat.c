#include "main.h"

/**
 * *_strcat - function tha replaces strcat.
 * @dest: first string.
 * @src: second string.
 * Return: return string.
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = str[i];
	}
	return (dest)
}

