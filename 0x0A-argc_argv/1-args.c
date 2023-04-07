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
	for (i = 0; i < argc; i++)
		count++;
	return (0);
}

