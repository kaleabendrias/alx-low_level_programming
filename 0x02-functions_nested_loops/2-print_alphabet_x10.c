/* number 2 */
#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10
 * Return: void
 */

void print_alphabet_x10(void)
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

}

