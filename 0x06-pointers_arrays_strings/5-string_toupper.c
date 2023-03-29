#include "main.h"

/**
 * string_toupper - turns all letters to upper.
 * @str: placeholder for the string being accepted.
 * Return: Always
 */

char *string_toupper(char *str)
{
	int len;

	while (str[len] != '\0')
	{
		if (str[len] >= 97 && str[len] <= 122)
		{
			str[len] -= 32;
		}
		len++;
	}
	return (str);
}

