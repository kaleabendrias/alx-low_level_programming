#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: void
 */

void print_alphabet(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}

