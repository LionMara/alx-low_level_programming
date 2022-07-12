#include "main.h"

/**
 * print_rev - prints a st string in reverse
 * @s: string being passed in
 * Return: nothing
 */
void print_rev(char *s)
{
int i = 0;

while (s[i])
i++;
while (i--)
_putchar(s[i]);
_putchar('\n');
}
