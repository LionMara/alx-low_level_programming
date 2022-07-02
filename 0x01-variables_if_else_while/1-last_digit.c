#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int digi = n % 10;
if (digi > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, digi);
if (digi == 0)
printf("Last digit of %d is %d and is 0 and is 0\n", n, digi);
if (digi < 6  && digi != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digi);
return (0);
}
