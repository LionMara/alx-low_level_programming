#include "lists.h"

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
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return(i);
}
