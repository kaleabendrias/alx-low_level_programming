#include "main.h"

/**
 * more_numbers - prints numbers upto 14, 10 times.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int i;
	int j;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		j++;
		_putchar('\n');
	}
}

