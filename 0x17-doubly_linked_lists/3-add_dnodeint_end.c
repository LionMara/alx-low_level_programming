#include "lists.h"

/**
 * add_dnodeint_end - Adds node at the end
 * @head: list
 * @n: what to be added
 *
 * Return: adress of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = (dlistint_t *)malloc(sizeof(dlistint_t)), *tmp;

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	tmp = *head;

	while (tmp && tmp->next)
		tmp = tmp->next;

	if (tmp)
	{
		ptr->prev = tmp;
		tmp->next = ptr;
	}
	else
	{
		*head = ptr;
		ptr->prev = NULL;
	}
	return (ptr);
}
