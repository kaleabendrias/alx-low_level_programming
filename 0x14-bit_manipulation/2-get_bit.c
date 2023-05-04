#include "main.h"

/**
 * get_bit - value of bit at given index
 * @n: bit
 * @index: index
 * Return: Always
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	mask = 1ul << index;
	return (n & mask) ? 1 : 0;
}
