#include "lists.h"
/**
 * dlistint_len - prints contents of a dlist
 * @h: what to be printed
 *
 * Return: returns number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;

		i = 0;

		while (h != NULL)
		{
			/*printf("%d\n", h->n);*/
			h = h->next;
			i++;
		}
	return (i);
}
