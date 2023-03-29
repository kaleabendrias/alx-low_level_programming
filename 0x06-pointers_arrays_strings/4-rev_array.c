#include "main.h"

/**
 * reverse_array - a function that reverses an array.
 * @a: placeholder
 * @n: placeholder for size
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i;
	int x;
	int temp;

	x = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[x];
		a[x] = temp;
		x--;
	}
}
