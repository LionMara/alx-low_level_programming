#include <unistd.h>
#include "main.h"
/**
 * _putchar- putchar implementation
 * Description: prints out to the stdout
 * Return: the number of bytes written
 */

int _putchar(char c)
{
	return(write(1,&c,1));
}
