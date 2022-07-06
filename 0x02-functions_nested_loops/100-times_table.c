#include "main.h"
/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */

void print_times_table(int n)
{
int horiz_no = 0, vert_no, prod_no;

if (n > 15 || n < 0)
return;
while (horiz_no <= n)
{
for (vert_no = 0; vert_no <= n; vert_no++)
{
prod_no = horiz_no * vert_no;
if (prod_no > 99)
{
_putchar(prod_no / 100 + '0');
_putchar((prod_no / 10 % 10) + '0');
_putchar(prod_no % 10 + '0');
}
else if (prod_no > 9)
{
_putchar(' ');
_putchar(prod_no / 10 + '0');
_putchar(prod_no % 10 + '0');
}
else if (vert_no != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(prod_no + '0');
}
else
_putchar(prod_no + '0');
if (vert_no != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
horiz_no++;
}
}
