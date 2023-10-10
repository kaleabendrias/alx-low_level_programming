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
	size_t m, n, current, i;

	if (array == NULL)
		return (-1);
	m = sqrt(size);
	n = 0;
	printf("Value checked array[0] = [%d]\n", array[0]);
	while (array[n] < value)
	{
		current = n + m;
		if (current >= size)
			current = size - 1;
		printf("Value checked array[%lu] = [%d]\n", current, array[current]);
		if (array[current] >= value || current == size - 1)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", n, current);
			break;
		}
		n = current;
	}
	for (i = n; i <= n + m && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
