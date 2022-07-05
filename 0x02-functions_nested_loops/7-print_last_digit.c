#include "main.h"
/**
 * print_last_digit - this fnction returns the last digit
 * @n: the integer to be checked
 *
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
if (n > 0)
{
return (n % 10);
}
else if (n < 0)
{
return (-n % 10);
}
else
{
return (0);
}
}
