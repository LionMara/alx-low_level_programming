#include "main.h"
/**
 * print_alphabet - prints a-z
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char c;
/* _putchar('a');*/
 c = 'a';
while (c <= 'z')
{
_putchar(c);
 c++;
 }
_putchar('\n');
}
