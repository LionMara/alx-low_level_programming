#include "main.h"
/**
 * more_numbers - prints numbers 0 - 14
 *
 */

void more_numbers(void)
{
int c;
int i;
for (i = 0; i <= 10; i++)
{
c = 0;
while (c <= 14)
{
if (c >= 10)
_putchar('1');
_putchar(c % 10 + '0');
c++;
}
_putchar('\n');
}
}
