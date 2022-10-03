#include "main.h"
/**
 * _isupper - checks for uppercase chars
 * @c: character to be checked
 * Return: return 0 if success
 */

int _isupper(int c)
{
if (c >= 65 && c < 91)
return (1);
else
return (0);
}
