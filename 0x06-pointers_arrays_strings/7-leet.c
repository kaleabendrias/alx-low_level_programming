#include "main.h"

/**
 * leet - turns some char into number.
 * @str: place holder
 * Return: string
 */

char *leet(char *str)
{
	int i, j;
	char repl[5][2] = {
		{'a', '4'},
		{'e', '3'},
		{'o', '0'},
		{'t', '7'},
		{'l', '1'}
	};
	for (i = 0; str[i]; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (str[i] == repl[j][0] || str[i] == repl[j][0] - 32)
			{
				str[i] = replacements[j][1];
				break;
			}
		}
	}
	return (str);
}

