/* number 1 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 *  main- here is where the code start
 *      executing
 *  Return: Always 0 (success).
*/

int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	rem = n % 10;

	if ((rem < 6) && (rem != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0", n, rem);
	else if (rem > 5)
		printf("Last digit of %d is %d and is greater than 5", n, rem);
	else
		printf("Last digit of %d is %d and is 0", n, rem);

	return (0);
}

