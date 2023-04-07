#include "main.h"

/**
 * _isupper - Entry point
 * @c: accepts vaqlue given.
 * Return: 1 if uppercase, 0 if other.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

