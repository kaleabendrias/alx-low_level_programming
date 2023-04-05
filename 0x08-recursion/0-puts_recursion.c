#include "main.h"

/**
 * _puts_recursion -puts newline at the end of the statement.
 * @s: string passed.
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

