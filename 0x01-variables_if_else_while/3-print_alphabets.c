#include <stdio.h>

/**
 * main - The function prints the lowercase character
 *
 * Return: (0)
 */

int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');

/* your code goes there */
return (0);
}
