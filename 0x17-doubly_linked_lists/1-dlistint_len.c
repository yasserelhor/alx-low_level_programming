#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - Counts the number of nodes in a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: Number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
