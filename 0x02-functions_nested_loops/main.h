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


