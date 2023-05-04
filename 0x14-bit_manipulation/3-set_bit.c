#include "main.h"

/**
 * set_bit - sets value of a bit to 1
 * @n: bit
 * @index: index
 * Return: Always
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n |= (1ul << index);
	return (1);
}

