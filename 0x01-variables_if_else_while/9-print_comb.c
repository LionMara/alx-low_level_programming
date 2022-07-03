#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digi;
digi = 48;
while (digi <= 57)
{
putchar(digi);
if (digi == 57)
break;
putchar(',');
putchar (' ');
digi++;
}
putchar('\n');
return (0);
}
