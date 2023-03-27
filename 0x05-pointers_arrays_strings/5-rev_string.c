#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: placeholder for the string.
 * Return: none.
 */

void rev_string(char *s)
{
	int i;
	int j;
	char temp;
	int len;

	len = 0;
	while (s[len] != '\0'){
		len++;
	}
	j = len - 1;
	for (i = 0; i <= (len - 1) / 2; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}

