#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints the elements of a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: Number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
