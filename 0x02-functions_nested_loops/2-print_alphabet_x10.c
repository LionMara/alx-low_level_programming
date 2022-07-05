#include "main.h"
/**
 * print_alphabet_x10 - prints a-z 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++ )
{
char c;
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
