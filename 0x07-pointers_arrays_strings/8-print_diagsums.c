#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - adds main and secondary diagonal.
 * @a: ptr.
 * @size: size of the in.
 * Return: none.
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i, j;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = *(a + i * size + j);
			}
			if (i == size - j - 1)
			{
				sum2 += *(a + i * size + j);
			}
		}
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

