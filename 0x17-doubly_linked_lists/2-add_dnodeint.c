#include "lists.h"
/**
 * add_dnodeint - adds a node to the
 * beginning of a doubly linked list
 *
 * @head: list
 * @n: what to be added
 *
 * Return: address of new element, or
 * NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = (dlistint_t *)malloc(sizeof(dlistint_t)), *tmp;

	tmp = *head;

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->prev = NULL;
	if (tmp == NULL)
		ptr->next = NULL;
	else
	{
		while (tmp->prev)
			tmp = tmp->prev;
		tmp->prev = ptr;
		ptr->next = tmp;
	}
	*head = ptr;
	return (*head);
}
