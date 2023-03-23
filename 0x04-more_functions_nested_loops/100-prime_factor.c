#include "main.h"
#include <stdio.h>

/**
 * main - returns the largest prime factor
 * Return: Always 0
 */

int main(void)
{
	long x;
	int max;
	long number;
	double sq;

	number = 612852475143;
	sq = sqrt(number);

	for (x = 0; x <= sq; x++)
	{
		if (number % x == 0)
		{
			max = number / x;
		}
	}
	printf("%ld\n", max);

	return (0);
}

