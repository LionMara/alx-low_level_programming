#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds inputs
 * @argc: counter to vector
 * @argv: pointer to cmd args
 * Return: something
 */

int main(int argc, char **argv)
{
int i;
if (argc < 1 )
{
printf("0\n");
}
/* if (!(isdigit(argv[i])))
{
 printf("Error\n");
 }*/
else
{
int i;
int sum = 0;
for (i = 1;i < argc; i++)
{
sum = sum+ atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
  
