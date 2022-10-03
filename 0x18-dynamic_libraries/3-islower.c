#include "main.h"
/**
 * _islower - checks if char is lower
 * @c: The char to be checked.
 *
 * Return: on success 1
 * Return 0 if char is not lower
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
