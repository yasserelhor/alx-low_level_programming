#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: Pointer to the address of the head of the doubly linked list.
 * @n: Integer value to be stored in the new node.
 * Return: Pointer to the newly added node, or NULL on failure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *f;

	if (head == NULL)
		return (NULL);

	f = malloc(sizeof(dlistint_t));
	if (f == NULL)
		return (NULL);

	f->n = n;
	f->prev = NULL;
	f->next = *head;
	*head = f;
	if (f->next != NULL)
		(f->next)->prev = f;
	return (f);
}
