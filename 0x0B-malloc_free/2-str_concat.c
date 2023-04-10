#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates string and put it in a new location.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 * Return: Always, pointer to the new location.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2;
	char *s, *k, *j, *p;

	size1 = 0;
	size2 = 0;
	k = (char *)s1;
	j = (char *)s2;
	while (*k != '\0')
	{
		k++;
		size1++;
	}
	while (*j != '\0')
	{
		j++;
		size2++;
	}
	s = malloc((size1 + size2 + 1) * sizeof(char));
	p = s;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1 != '\0')
	{
		*p++ = *s1++;
	}
	while (*s2 != '\0')
	{
		*p++ = *s2++;
	}
	*p = '\0';
	return (s);
}

