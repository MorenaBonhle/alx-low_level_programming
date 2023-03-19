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
{printf("%d\tis positive", n);
}
if (n == 0)
{printf("%d\tis zero", n);
}
if (n < 0)
{printf("%d\tis negative", n);
}

/* your code goes there */
return (0);
}
