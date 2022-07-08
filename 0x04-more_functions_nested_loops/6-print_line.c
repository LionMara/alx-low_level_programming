#include "main.h"
/**
 * print_line - prints a line
 * @n: the number of times '_' is printed
 */

void print_line(int n)
{
int c = 0;

while (c < n)
{
_putchar('_');
c++;
}
_putchar('\n');
}
