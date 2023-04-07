#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds intigers.
 * @argc: the number of arguments.
 * @argv: the pointer to array of strings.
 * Return: 0 ir 1.
 */

int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

