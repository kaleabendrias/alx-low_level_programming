#include "main.h"

/**
 * cap_string - capitalizes paragraph correctly.
 * @str: placeholder.
 * Return: String.
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t')
		{
			str[i] = ' ';
		}
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '.' || str[i - 1] == '\n')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

