#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Determing the number state*/
	if (n > 0)
	{
	 printf("%d\n is positive", n);
	}
        if (n == 0)
	{
	 printf("%d\n is zero", n);
	}
	if (n < 0)
	{
	 printf("%d\n is negative", n);
	}

	/* your code goes there */
	return (0);
}
