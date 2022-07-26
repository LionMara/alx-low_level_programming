#include <stdio.h>
#include <string.h>

/**
 * main - prints all args passed
 * @argc: counter to vector
 * @argv: pointer to cmd args
 * Return: something
 */

int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
