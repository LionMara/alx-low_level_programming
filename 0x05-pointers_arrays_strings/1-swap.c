#include "main.h"
#include <stdio.h>

/**
 * swap_int - this swaps two ints
 * @a: one of the ints
 * @b: the other int
 * nothing to return
 */

void swap_int(int *a, int *b)
{
int *c, *d;

*a += *b;
*b = *a - *b;
*a = *a - *b;
}
