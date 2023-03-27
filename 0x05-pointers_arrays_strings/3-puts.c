#include "main.h"
#include <string.h>

/**
 * _puts - function that prints to stdout.
 * @str: placeholder for string.
 * Return: none.
 */

void _puts(char *str)
{
	int i;
	int j;

	j = strlen(str);
	for (i = 0; i < j; i++)
	{
		_putchar(str[i]);
	}
}

