#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - prints the array.
 * @a: the array
 * @n: size of array.
 * Return: none.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n-1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}

