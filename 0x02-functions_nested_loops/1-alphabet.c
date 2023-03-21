#include "main.h"

/**
 * main - Entry point.
 * Description: write a program that prints "_putchar" followed by a new line.
 * Return: Always 0 (Success.)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');

	return (0);
}

