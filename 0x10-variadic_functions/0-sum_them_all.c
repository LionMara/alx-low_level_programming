#include "variadic_functions.h"

/**
 * sum_them_all - sums all args
 * @n: integer
 * @...: args
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, signed int);
	}
	va_end(ap);
	return (sum);
}
