#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of string.
 * @s: placeholder for variable.
 * Return: length of string.
 */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

