#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: string to be reversed
 * @n: number of elemnts in array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int tmp, index;

for (index = n - 1; index >= n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
