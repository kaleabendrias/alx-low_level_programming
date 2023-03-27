#include "main.h"
#include <string.h>

/**
 * puts2 - returns only characters in even place.
 * @str: place holder.
 * return: none.
 */

void puts2(char *str)
{
	int i;
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

