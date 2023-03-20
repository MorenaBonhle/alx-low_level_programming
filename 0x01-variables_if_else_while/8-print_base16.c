#include <stdio.h>

/**
 * main - The function prints the lowercase character
 *
 * Return: (0)
 */

int main(void)
{
int i;
int j;

for (i = 48; i <= 58; i++)
{
j++;
if (j == 11)
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
