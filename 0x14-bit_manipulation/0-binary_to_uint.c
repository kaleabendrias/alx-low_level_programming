#include <stddef.h>

/**
 * binary_to_uint - converts biary to decimal
 * @b: the char
 * Return: Always
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, result, power;
	int i;
	const char *p;

	if (b == NULL)
		return (0);
	len = 0;
	p = b;
	while (*p != '\0')
	{
		if (*p != '0' && *p != '1')
			return (0);
		++len;
		++p;
	}
	result  = 0;
	power = 1;
	for (i = len - 1; i >= 0; --i)
	{
		if (b[i] == '1')
			result += power;
		power *= 2;
	}
	return (result);
}

