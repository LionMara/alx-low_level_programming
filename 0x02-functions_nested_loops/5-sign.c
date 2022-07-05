#include "main.h"
/**
 * print_sign - It shows the sign of a number
 * @n: the integer to be checked
 *
 * Return: 1 if positive
 * Return: 0 if zero
 * Return: -1 if less zero
 */
int print_sign(int n)
{
  if (n > 0)
    {
      _putchar('+');
      return (1);
    }
  else if (n < 0)
    {
      _putchar('-');
      return (-1);
    }
  else
    {
      _putchar('0');
      return (0);
    }
}
	
