#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
  int length;
  char *s;
  int i = 0;
  
  length = strlen(str);
  s = malloc(length *sizeof(char));

  if (s == NULL)
    {
      printf("Memory not allocated.\n");
      return NULL;
    }

  while (i < length)
    {
      s[i] = str[i];
      i++;
    }
  return (s);
}
