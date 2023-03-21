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
	int i;

	x = 0;
	y = 1;

	for (i = 3; i < 50; i++)
	{
		x = y;
		y = next;
		next = x + y;
		printf("%d", x);
		if ( i == 49)
			printf("\n");
		printf(", ");
	}

	return (0);
}

