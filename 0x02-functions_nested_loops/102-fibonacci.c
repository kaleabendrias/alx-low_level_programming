#include <stdio.h>
/**
  * main - sum even fibonacci numbers under 4 million.
  * Return: Nothing.
  */

int main(void)
{
	int x;
	int y;
	int next;
	int r;
	int i;

	x = 0;
	y = 1;
	next = 2;
	r = 0;

	for (i = 3; i < 4000000; i++)
	{
		x = y;
		y = next;
		next = x + y;
	}

	return (0);
}

