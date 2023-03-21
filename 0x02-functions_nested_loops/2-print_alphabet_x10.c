#include "main.h"

/**
 * Prints ten times the alphabets
 */

void print_alphabet_x10(void)
{
char ch;
int i = 0;

while (i < 10)
{
ch = 'a';
while(ch <= 'z')
{
 _putchar('\n');
 i++;
}
}
