#include "main.h"
/**
 * _isalpha - checks if char is lower or upper
 * @c: The char to be checked.
 *
 * Return: on success 1
 * Return 0 if char is not lower
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
