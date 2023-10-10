#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i;
	size_t mid;

	if (array == NULL || !value)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
