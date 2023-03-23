#include "main.h"

/**
 * _isdigit - Entry point
 * @c: accepts vaqlue given.
 * Return: 1 if uppercase, 0 if other.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

