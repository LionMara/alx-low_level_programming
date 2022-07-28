#include "main.h"
#include <stdlib.h>
/**
 * void *malloc_checked - returns pointer
 * @b: int
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
void *s;
s = malloc(b);

if (s == NULL)
exit(98);

return (s);
}
