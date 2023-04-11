#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * strtow - main function.
 * @str: given string.
 * Return: Always.
 */

char **strtow(char *str)
{
	int i, len, worlen, n, j;
	char **av;

	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}
	av = malloc(sizeof(char *) * (strlen(str) + 1));
	if (av == NULL)
		return (NULL);
	i = 0;
	len = strlen(str);
	wordlen = 0;
	for (n = 0; n < len && str[n] != '\0'; n++)
	{
		if (str[n] != ' ')
		{
			wordlen++;
		}
		if ((str[n + 1] == ' ' || str[n + 1] == '\0') && wordlen > 0)
		{
			av[i] = malloc(sizeof(char) * (wordlen + 1));
			for (j = 0; j < worlen; j++)
			{
				av[i][j] = str[n - wordlen + 1 + j];
			}
			av[i][wordlen] = '\0';
			i++;
			wordlen = 0;
		}
	}
	av[i] = NULL;
	return (av);
}

