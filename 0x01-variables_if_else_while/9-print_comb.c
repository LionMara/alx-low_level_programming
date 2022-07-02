#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digi;
for (digi = 48; digi <= 57; digi++)
{
putchar(digi);
putchar(',');
}
putchar('\n');
return (0);
}
