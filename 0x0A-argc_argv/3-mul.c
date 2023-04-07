#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns multplication of two intigers.
 * @argc: count of the number of arguments.
 * @argv: pointer of arra of strings.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
	}
	else
		printf("Error\n");

	return (0);
}

