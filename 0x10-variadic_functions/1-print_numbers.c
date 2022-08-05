#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers separted with a string
 * @separator: string
 * @n: unsigned int
 * @...: magic
 * return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		if (separator == NULL)
			printf("%d ", va_arg(ap, unsigned int));
		else
			printf("%d%s", va_arg(ap, unsigned int), separator);
	}
	va_end(ap);
	printf("\n");
}
