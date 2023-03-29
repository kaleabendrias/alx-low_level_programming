#include "main.h"

/**
 * leet - turns some char into number.
 * @str: place holder
 * Return: string
 */

char *leet(char *str)
{
	int i, j;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '7';
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
		else
		{
			str[i] = str[i];
		}
	}
	return (str);
}

