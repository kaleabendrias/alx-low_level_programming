/* question number 1 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 *  main- here is where the code start
 *      executing.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

    if(n>0)
    {
        printf("%d is positive", n);
    }
    else if(n==0)
    {
        printf("%d is zero");
    }
    else
    {
        printf("%d in negative");
    }
	return (0);
}

