/* number 10 */
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
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				putchar(' ');
				putchar(',');
			}
		}
	}

	putchar('\n');

	return (0);
}

