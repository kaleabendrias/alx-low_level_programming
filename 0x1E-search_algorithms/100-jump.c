#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array of
 * @array: a pointer to the first element of the array
 * @size:  is the number of elements in array
 * @value: the value to search for
 * Return: return the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t m, n;

	if (array == NULL)
		return (-1);
	n = 0;
	m = sqrt(size);
	while (n < size && array[n] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);
		n += m;
	}
	m = n - m;
	printf("Value found between indexes [%lu] and [%lu]\n", m, n);
	n = n >= size ? size - 1 : n;
	while (m <= n)
	{
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		if (array[m] == value)
			return (m);
		m++;
	}
	return (-1);
}
