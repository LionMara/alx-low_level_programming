#include "lists.h"
/**
 * print_dlistint - prints contents of a dlist
 * @h: what to be printed
 *
 * Return: returns number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (EXIT_FAILURE);
	}
	else
	{
		i = 0;

		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}

	return (i);
}
