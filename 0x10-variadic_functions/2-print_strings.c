#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: does exactly that
 * @n: unsigned cabron
 * @...: some couple of guys we don't know
 * return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%s ", va_arg(ap, char *));
		else
			printf("%s%s", va_arg(ap, char *), separator);
	}
	printf("\n");
}
