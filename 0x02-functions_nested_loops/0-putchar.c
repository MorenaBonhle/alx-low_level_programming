#include <stdio.h>

/**
 * main - The function prints the words
 *
 * Return: (0)
 */

int main( void )
{
char words[] = "_putchar";
int i;
    
for (i = 0; i < 9; i++)
{
if (words[i] == '\0')
{
putchar('\n');
break;
}
else
putchar(words[i]);
}

/* your code goes there */
return (0);
}
