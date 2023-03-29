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
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '.')
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

