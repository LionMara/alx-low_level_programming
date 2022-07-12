#include "main.h"

/**
 * *_strcpy - copies contents from pointer to a buffer
 * @dest: buffer
 * @src: pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i = -1;

do {
i++;
dest[i] = src[i];
} while (src[i] != '\n');
return (dest);
}
