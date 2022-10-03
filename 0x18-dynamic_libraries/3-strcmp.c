#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: the difference if they don't match and a 0 if they match
 */

int _strcmp(char *s1, char *s2)
{
while ((*s1 && *s2) && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
