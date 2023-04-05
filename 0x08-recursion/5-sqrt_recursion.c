#include "main.h"

/**
 * sq - hwlps us to get the sqrt.
 * @n: place holder.
 * @a: placeholder.
 * Return: Always int.
 */

int sq(int n, int a)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (a * a > n)
		return (-1);
	return (sq(n, a + 1));
}

int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}

