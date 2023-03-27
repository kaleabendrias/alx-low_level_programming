#include "main.h"
#include <string.h>

/**
 * *_strcpy - copys string to other var.
 * @dest: placeholder.
 * @src: placeholder.
 * Return: an int dest.
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

