#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * string_nconcat - allocates memo for concatenated string.
 * @s1: first string.
 * @s2: second string.
 * @n: size of s2 needed to be copied.
 * Return: Always.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *k, *l;
	int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	len2 = 0;
	while (*s1 != '\0')
	{
		len1++;
		s1++;
	}
	while (*s2 != '\0' && (unsigned int) len2 < n)
	{
		len2++;
		s2++;
	}
	s1 -= len1;
	s2 -= len2;
	if (n >= (unsigned int) len2)
		n = len2;
	k = malloc(sizeof(char) * (len1 + len2 + 1));
	if (k == NULL)
		return (NULL);
	l = k;
	for (i = 0; i < len1; i++)
	{
		*l = s1[i];
		l++;
	}
	for (j = 0; j < len2; j++)
	{
		*l = s2[j];
		l++;
	}
	l++;
	*l = '\0';
	return (k);
}
