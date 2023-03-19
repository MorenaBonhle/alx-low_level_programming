#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - The function generates random numbers
 *
 * Return: (0)
 */


int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* Determing the number state*/
if (n > 0)
{printf("%d is positive\n", n);
}
if (n == 0)
{printf("%d is zero\n", n);
}
if (n < 0)
{printf("%d is negative\n", n);
}

/* your code goes there */
return (0);
}
