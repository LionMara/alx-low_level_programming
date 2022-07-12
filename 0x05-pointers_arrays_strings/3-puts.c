#include "main.h"
/**
 * _puts - prints a string followed by a string
 * @str: what is to be passed in
 * Return: nothing
 */

void _puts(char *str)
{
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
