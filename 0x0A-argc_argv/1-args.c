#include <stdio.h>
#include <string.h>

/**
 * main - prints number of args passed
 * @argc: counter to vector
 * @argv: pointer to cmd args
 * Return: something
 */

int main(int argc, __attribute__((unused))char **argv)
{
int n;
n = argc - 1;
printf("%d\n", n);
return (0);
}
