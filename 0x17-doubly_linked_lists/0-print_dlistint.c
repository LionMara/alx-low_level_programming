#include "lists.h"
/**
 * print_dlistint - prints contents of a dlist
 * @h: what to be printed
 *
 * Return: returns number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	if (h == NULL)
	{
		exit(1);
	}
	else
	{
		i = 0;

		while (h != NULL)
		{
			printf("%i\n", h->n);
			h = h->next;
			i++;
		}
	}

	return (i);
}
