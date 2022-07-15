#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @str: string to be changed
 * Return: upped pointer to string
 */
char *string_toupper(char *str)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}
