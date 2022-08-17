#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints elements of a list
 * @h: what to be printed
 *
 * Return: nuber of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	int n;

	ptr = malloc(sizeof(listint_t));
	ptr = h;
	n = 0;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n++;
	}

	return (n);
}
