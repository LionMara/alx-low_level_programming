#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - a pointer to a newly allocated space in memory
 * @str: string input
 *
 * Return: pointer to the allocated space if successful else NULL
 */
char *_strdup(char *str)
{
  char *temp;
  int i = 0, j = 0;

  if (str != NULL)
    {
      while (*str)
	{
	  j++;
	}
      printf("%s\n", str);
      temp = malloc(sizeof(char) * j + 1);
      if (temp == NULL)
	{
	  printf("Igo shida\n");
	  return (NULL);
	}
      while (str[i] != '\0')
	{
	  temp[i] = str[i];
	  printf("%c\n",i);
	  i++;
	}
      temp[i] = '\0';
    }
  else
    {
      return (NULL);
    }

  return (temp);
}
