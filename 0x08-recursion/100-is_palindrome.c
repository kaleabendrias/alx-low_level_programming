#include "main.h"

/**
 * checklen - returns the length of string.
 * @a: string pointer.
 * @l: length placeholder.
 * Return: Always int.
 */

int checklen(char *a, int l)
{
	if (*a == '\0')
		return (l - 1);
	return (checklen(a + 1, l + 1));
}
/**
 * checkpalin - checks for palindrome.
 * @a: placeholer.
 * @l: placeholder.
 * Return: Always int.
 */

int checkpalin(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (checkpalin(a + 1, l - 2));
}
/**
 * is_palindrome - main function.
 * @s: placeholder for the string.
 * Return: Always int.
 */
int is_palindrome(char *s)
{
	int l;

	l = checklen(s, 0);
	return (checkpalin(s, l));
}

