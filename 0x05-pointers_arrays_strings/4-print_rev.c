#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse.
 * @s: place holder for the string.
 * Return: none.
 */

void print_rev(char *s)
{
	int i;
	int j;

	j = strlen(s);
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

