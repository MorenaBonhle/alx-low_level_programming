#include <stdio.h>

/**
 * main - The function prints the lowercase character
 *
 * Return: (0)
 */

int main(void)
{
int i;

for (i = 48; i < 57; i++)
{
if (i == 58)
{
for (i = 97; i < 102; i++)
{
putchar(i);
}
}
putchar(i);
}

putchar('\n');

/* your code goes there */
return (0);
}
