#include "function_pointers.h"

/**
 * print_name - entry
 * @name: name
 * @f: pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (nmae == NULL || f == NULL)
		return;
	f(name);
}
