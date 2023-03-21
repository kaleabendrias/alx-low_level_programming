#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _islower(int c)
{
	if (c >= 97 && c<=122)
	{
		return (1);
	}
	return (0);
}
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c<=90))
	{
		return (1);
	}
	return (0);
}
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

