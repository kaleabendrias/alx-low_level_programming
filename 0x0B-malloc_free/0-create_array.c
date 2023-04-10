#include "main.h"
#include <stdlib.h>

/**
 * create_array - initializes allocated memory wih char.
 * @size: memory size.
 * @c: charcter to be placed in memo.
 * Return: Always.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size  == 0)
		return (0);
	arr = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		*(arr + i) = c;
	return (arr);
}

