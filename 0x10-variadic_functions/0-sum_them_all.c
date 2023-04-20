#include <stdarg.h>

/**
 * sum_them_all - sums all the numbers.
 * @n: count of argumets
 * Return: Always
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, const unsigned int);
	}

	va_end(args);
	return (sum);
}

