#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: 0
 */
void times_table(void)
{
int horizontal_number = 0;
int vertical_number;
int products;

while (horizontal_number < 10)
{
vertical_number = 0;
while (vertical_number < 10)
{
products = horizontal_number * vertical_number;
if (products > 9)
{
_putchar(products / 10 + '0');
_putchar(products % 10 + '0');
}
else if (vertical_number != 0)
{
_putchar(' ');
_putchar(products + '0');
}
else
{
_putchar(products + '0');
}
if (vertical_number != 9)
{
_putchar(',');
_putchar(' ');
}
vertical_number++;
}
_putchar('\n');
horizontal_number++;
}
}
