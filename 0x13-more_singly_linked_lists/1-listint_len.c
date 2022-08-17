#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - prints elements of a list
 * @h: what to be printed
 *
 * Return: nuber of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	int n;

	ptr = malloc(sizeof(listint_t));
	ptr = h;
	n = 0;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		n++;
	}

	return (n);
}
