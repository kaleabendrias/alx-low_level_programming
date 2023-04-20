#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - entry
 * @separator: separator
 * @n: size
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int k;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		k = va_arg(args, int);
		printf("%d", k);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}

