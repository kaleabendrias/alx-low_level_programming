#include "main.h"

/**
 * main - Entry point.
 * Description: write a program that prints "_putchar" followed by a new line.
 * Return: Always 0 (Success.)
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

