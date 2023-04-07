#include <stdio.h>
#include <stdlib.h>

/**
 * main - counts changes you nedd.
 * @argc: number of arguments passed.
 * @argv: pointer to the array of strings.
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int y, x, count;
	int cents[] = {25, 10, 5, 2, 1};

	x = 0;
	y = atoi(argv[1]);
	count = 0;
	if (argc > 2)
	{
		printf("Error\n");
		return (0);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (y != 0)
	{
		if (y >= cents[count])
		{
			y -= cents[count];
			x += 1;
			count = 0;
		}
		else
		{
			count++;
		}
	}
	printf("%d\n", x);
	return (0);
}
