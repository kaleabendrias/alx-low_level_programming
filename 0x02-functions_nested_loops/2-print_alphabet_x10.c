/* number 2 */
#include "main.h"

/**
 * main - Entry point.
 * Description: write a program that prints "_putchar" followed by a new line.
 * Return: Always 0 (Success.)
 */

int main(void)
{
	char x;
	int i;

	x = 'a';
	i = 0;
	while (i < 10)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		x = 'a';
		i++;
	}
	_putchar('\n');

	return (0);
}

