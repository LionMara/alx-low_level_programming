#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * struct dlistint_s - dobly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to thenext node
 *
 * description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
}dlistint_t;
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
#endif