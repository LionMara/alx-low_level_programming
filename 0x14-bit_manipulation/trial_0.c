#include "main.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{
	int sum = 0, i, x;
	const char  *ptr;



	ptr = b;
	i = 0;

	while (ptr[i])
	{
		if (ptr[i] == '1')
		{
			x = square(i);
			printf("X is %d\n", x);
			sum += x;
		}
		i++;
	}
	return (sum);
}

int square(int n)
{
	int result = 1, x;
	x = 2;
	if (n == 0)
		return (result);
	while (n != 0)
	{
		result *= x;
		--n;
	}
	return (result);
}
