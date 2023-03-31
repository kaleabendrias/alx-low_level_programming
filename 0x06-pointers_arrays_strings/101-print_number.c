#include "main.h"

/**
 * print_number - prints numbers.
 * @n: placehollder.
 * Return: none
 */

void print_number(int n)
{
	char neg = '-';
	if (n < 0)
	{
		_putchar(neg);
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

