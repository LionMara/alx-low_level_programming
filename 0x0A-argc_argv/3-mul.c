#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - takes in argc and argv from the command line
 * @argc: counter to vector
 * @argv: pointer to cmd args
 * Return: something
 */

int main(int argc, char **argv)
{
if (argc > 3|| argc < 3)
{
printf("Error\n");
return (1);
}
else
{
int n, m;
n = atoi(argv[1]);
m = atoi(argv[2]);
printf("%d\n", n*m);
}
return (0);
}
  
