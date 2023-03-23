#include "main.h"

/**
 * print_diagonal - draws diagonal line.
 * Return: void.
 */

void print_diagonal(void)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= x; y++)
			{
				_putchar(92);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

