#include "main.h"

/**
 * pr - helper function to get prime numbers.
 * @n: the number.
 * @a: placeholder.
 * Return: Always int.
 */

int pr(int n, int a)
{
	if (n <= 1)
		return (0);
	if (n % a == 0)
		return (0);
	if (a >= n - 1)
		return (1);
	return (pr(n, a + 1));
}
/**
 * is_prime_number - detects prime number.
 * @n: placeholder.
 * Return: Always int.
 */

int is_prime_number(int n)
{
	return (pr(n, 2));
}

