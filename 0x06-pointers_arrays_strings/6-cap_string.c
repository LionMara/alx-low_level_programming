#include "main.h"
/**
 * cap_string - caps all words of a string
 * @str: string to be capped
 * Return: capped string
 */
char *cap_string(char *)
{
int index = 0;

while (str[index])
{
while (!(str[index] >= 'a' && str[index] <= 'z'))
index++;
if (str[index -1] == ' ' || str[index -1] == '\t' || str[index -1] == '\n' ||
str[index -1] == ',' || str[index -1] == ';' || str[index -1] == '.' ||
str[index -1] == '!' || str[index -1] == '?' || str[index -1] == '"' ||
str[index -1] == '(' || str[index -1] == ')' || str[index -1] == '{' ||
str[index -1] == '}' || index == 0)
str[index] -= 32;
index++;
}
return (str);
}
