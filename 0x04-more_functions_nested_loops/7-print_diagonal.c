#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: the number of times ' ' is printed
 */

void print_diagonal(int n)
{
int c, j;
c = 0;
while (n > 0)
{
j = c;
while (j > 0)
{
_putchar(' ');
j--;
}
_putchar('\\');
_putchar('\n');
c++;
n--;
}
if (c < 1)
_putchar('\n');
}
