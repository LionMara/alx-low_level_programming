#include "main.h"
/**
 * _strcat- pointer to function
 * @dest: string to be added to
 * @src: string to be added to dest
 * Return: retuns concatenated string
 */

char *_strcat(char *dest, char *src)
{
int index = 0;
int dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
