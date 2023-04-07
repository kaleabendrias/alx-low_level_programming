#include "main.h"

/**
 * _memcpy - copies from pointer src to dest.
 * @dest: destination position.
 * @src: src to be copied from.
 * @n: size of numbers to becopied.
 * Return: Always dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		dest[n] = src[n];
	}
	return (dest);
}

