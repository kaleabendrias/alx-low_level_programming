#include "main.h"
#include <string.h>

/**
 * put_half - prints the 2nd half of string.
 * @str: placeholder.
 * Return: none.
 */

void puts_half(char *str)
{
	int i;
	int j;
	int len;

	len = strlen(str);
	j = len - 1;
	for (i = len / 2; i <= j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

