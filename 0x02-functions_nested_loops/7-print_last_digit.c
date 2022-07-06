#include "main.h"
/**
 * print_last_digit - this fnction returns the last digit
 * @n: the integer to be checked
 *
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
  int last_number;
if (n > 0)
{
  last_number = n % 10;
  _putchar(last_number + '0');
  return (last_number);
}
else if (n < 0)
{
  last_number = -1 * (n%10);
  _putchar(last_number + '0');
  return (last_number);
}
else
{
  last_number = 0;
  _putchar(last_number + '0');
  return (last_number);
}
}
