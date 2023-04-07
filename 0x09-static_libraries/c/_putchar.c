#include <unistd.h>

/**
 * _putchar - wrties the char c into stdout
 * @c: character to print
 * Return: on sucess 1
 * On error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


