#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the contents of an array separated with a comma
 * @a: the array
 * @n: an integer
 * Returns: renothing to be returned
 */

void print_array(int *a, int n)
{
int i;
i = 0;

for (n--; n >= 0; n--, i++)
{
printf("%d", a[i]);
if (n > 0)
{
printf(",");
}
}
printf("\n");
}
