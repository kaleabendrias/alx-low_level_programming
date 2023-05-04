#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: pacholder
 * @m: placeholder
 * Return: Always
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff, count;

	diff = n ^ m;
	count = 0;
	while (diff > 0)
	{
		count += (diff & 1);
		diff >>= 1;
	}
	return (count);
}

