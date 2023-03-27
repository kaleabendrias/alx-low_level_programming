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

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

