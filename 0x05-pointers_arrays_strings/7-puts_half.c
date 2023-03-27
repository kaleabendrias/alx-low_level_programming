#include "main.h"
#include <string.h>

/**
 * puts_half - prints the 2nd half of string.
 * @str: placeholder.
 * Return: none.
 */

void puts_half(char *str)
{
	int j;
	int k;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		k = (j - 1) / 2;
		k += 1;
	}
	else
	{
		k = j / 2;
	}
	for (; k < j; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}

