#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse.
 * @s: place holder for the string.
 * Return: none.
 */

void print_rev(char *s)
{
	int i,len;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

