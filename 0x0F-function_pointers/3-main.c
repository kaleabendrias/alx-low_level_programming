#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - entry
 * @argc: argumesnts
 * @argv: pointer
 * Return: Always
 */

int main(int argc, char *argv[])
{
	int n1, n2, a;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	a = res(n1, n2);

	printf("%d\n", a);
	return (0);
}
