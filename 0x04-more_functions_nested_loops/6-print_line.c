#include "main.h"

/**
 * print_line - check the code
 * @n: palceholder for printing upto n times.
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}

