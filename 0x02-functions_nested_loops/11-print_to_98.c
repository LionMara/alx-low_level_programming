#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers and ends at 98
 *@n: int type number
 */
void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(",");
printf(" ");
}
n--;
}
}
else
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(",");
printf(" ");
}
n++;
}
}
printf("\n");
}
