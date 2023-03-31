#include "main.h"

/**
 * print_number - prints numbers.
 * @n: placehollder.
 * Return: none
 */

void print_number(int n)
{
	char neg;
	unsigned int x;

	neg = 45;
	if (n < 0)
	{
		_putchar(neg);
		n = -n;
	}
	x = n;
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar(x % 10 + '0');
}

