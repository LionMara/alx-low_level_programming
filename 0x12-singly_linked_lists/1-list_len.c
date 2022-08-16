#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len- prints number of elements of a list
 * @h: list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int n = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		n++;
		current = current->next;
	}
	return (n);
}
