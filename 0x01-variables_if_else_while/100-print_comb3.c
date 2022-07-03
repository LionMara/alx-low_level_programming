#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j;
i = 48;
while (i < 58)
{
for (j = 49; j < 58; j++)
{
if (!(i == j) && !(i >= j) && (i != j))
{
putchar(i);
putchar(j);
if (j == 57 && i == 56)
break;
putchar(',');
putchar(' ');
}
}
i++;
}
putchar('\n');
return (0);
}
