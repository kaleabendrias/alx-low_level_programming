/* number 9 */
#include <stdio.h>

/**
 * main- this is where the main starts
 * executing.
 *
 * Return: Always(0)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

