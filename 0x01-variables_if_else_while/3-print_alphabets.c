/* number 4*/

#include <stdio.h>

/**
 * main- this is where the main starts
 * executing.
 *
 * Return: Always(0)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'Z'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar("\n");

	return (0);
}

