#include <stdio.h>

/**
 * main - shows the first argument.
 * @argc: count of the passed arguments.
 * @argv: array of strings.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

