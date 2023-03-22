#include "main.h"

/**
 * Prints ten times the alphabets
 */

/* The funcion that prints alphabets*/

void print_alphabet_x10(void)
{
char ch;
int i;

i = 0;

/* loop functions */

while (i < 10)
{
ch = 'a';
while(ch <= 'z')
{
 _putchar(ch);
 ch++;
}
 _putchar('\n');
 i++;
}
}
