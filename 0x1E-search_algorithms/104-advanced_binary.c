#include "search_algos.h"

/**
* advanced_binary_recursive - Recursive binary search function
* @array: Pointer to the first element of the array
* @left: The left index of the subarray
* @right: The right index of the subarray
* @value: The value to search for
*
* Return: The index where the value is located, or -1 if not found
*/
int advanced_binary_recursive(int *array, int left, int right, int value)
{
	int mid, i;

	if (left > right)
		return (-1);

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
	{
		if (mid == left || array[mid - 1] != value)
			return (mid);
		return (advanced_binary_recursive(array, left, mid, value));
	}

	if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, right, value));

	return (advanced_binary_recursive(array, left, mid, value));
}

/**
* advanced_binary - Searches for a value in a sorted array using recursion
* @array: Pointer to the first element of the array
* @size: Number of elements in the array
* @value: The value to search for
*
* Return: Index where the value is located, or -1 if not found
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
