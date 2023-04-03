#include "main.h"

/**
 * memset - fills area pointed by s with constant byte b.
 * @s: pointer variable.
 * @b: constant byte.
 * @n: size control.
 * Return: Always pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

