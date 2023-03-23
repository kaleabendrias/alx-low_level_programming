#include "math.h"

/**
 * print_square - prints the char # as much as size.
 * @size: placeholder
 * Return: void.
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}

