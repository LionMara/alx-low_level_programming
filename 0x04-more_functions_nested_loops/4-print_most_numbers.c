#include "main.h"
/**
 * print_most_numbers - prints numbers 0 - 9
 *
 */

void print_most_numbers(void)
{
int c;
c = 48;
while (c < 58)
{
if (c != 50 && c != 52)
_putchar(c);
c++;

}
_putchar('\n');
}
