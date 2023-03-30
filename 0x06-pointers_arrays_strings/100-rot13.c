#include "main.h"

/**
 * rot13 - encodes all characters into rot13.
 * @str: placeholder.
 * Return: returns string encoded.
 */

char *rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while (((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			if ((str[i] >= 'a' && str[i] < 'n') || (str[i] >= 'A' && str[i] < 'N'))
			{
				str[i] += 13;
			}
			else
			{
				str[i] -= 13;
			}
			break;
		}
		i++;
	}
	return (str);
}

