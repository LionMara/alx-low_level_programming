#include "main.h"
#include <stdio.h>

/**
 * _strlen - checks the length of a str
 * @s: what is passed
 * Return: return 0 on success
 */

int _strlen(char *s)
{
int length = 0;

while (s[length])
length++;
return (length);
}
