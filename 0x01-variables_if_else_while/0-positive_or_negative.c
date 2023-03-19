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
{printf("%d\t is positive", n);
}
if (n == 0)
{printf("%d\t is zero", n);
}
if (n < 0)
{printf("%d\t is negative", n);
}

/* your code goes there */
return (0);
}
