#include <stdio.h>

/**
 * main - returns the number of strings.
 * @argc: number of arguments passed.
 * @argv: pointer to array of strings.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int count;

	count = 0;
	for (i = 0; i < argc && *argv[argc-1] != '\0'; i++)
		count++;
	printf("%d\n", count);
	return (0);
}

