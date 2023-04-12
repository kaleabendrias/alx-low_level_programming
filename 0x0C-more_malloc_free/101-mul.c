#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * @argc: count of the argumets passed.
 * @argv: array of characters.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int mu, i, num;
	char *endptr;

	mu = 1;
	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	else if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			num = strtol(argv[i], &endptr, 10);
			if (*endptr != '\0' && argv[i][0] != '0')
			{
				printf("Error\n");
				exit(98);
			}
			mu *= num;
		}
	}
	printf("%d\n", mu);
	return (0);
}

