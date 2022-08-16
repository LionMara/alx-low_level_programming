#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node- add node mwanzo
 * @head: first pointer
 * @str: str
 * Return: addr or Null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *s;
	int n;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	s = strdup(str);
	n = 0;
	while (s[n] != '\0')
		n++;
	new->str = s;
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = n;
	new->next = NULL;

	new->next = *head;
	(*head) = new;
	/*free(new);*/
	return (*head);
}
