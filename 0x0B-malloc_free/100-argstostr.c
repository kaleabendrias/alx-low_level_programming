#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - prints strings in a newline.
 * @ac: placeholder.
 * @av: placeholder.
 * Return: Always.
 */

char *argstostr(int ac, char **av)
{
	int len, k, i, n;
	char *s;

	len = 0;
	k = 0;
	if (ac == 0 || av ==NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			s[k++] = av[i][n];
		if (s[k] == '\0')
			s[k++] = '\n';
	}
	return (s);
}

