#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 with out 2and 4.
 *
 * Return: void.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}

