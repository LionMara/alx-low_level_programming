#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  int i, j, k;
i = 48;
while (i < 58)
{
k = 49;
while(k <58)
{
for (j = 50; j < 58; j++)
{
  if (!(i == k == j ) && !(i == k) && !(i == j) && !(k == j) && (i < k) && (i != j != k))
{
putchar(i);
putchar(k);
putchar(j);
 if (i == 55 && k == 56 && j == 57)
break;
putchar(',');
putchar(' ');
}
}
k++;
}
i++;
}
putchar('\n');
return (0);
}
