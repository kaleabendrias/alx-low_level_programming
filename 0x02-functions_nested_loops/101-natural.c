#include <stdio.h>

/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5 below 1024.
  * Return: Nothing.
  */

int main(void)
{
	int i;
	int r = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			r += i;
		}
	}
	printf("%d\n", r);
}
