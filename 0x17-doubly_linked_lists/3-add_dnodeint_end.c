#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to the address of the head of the doubly linked list.
 * @n: Integer value to be stored in the new node.
 * Return: Pointer to the newly added node, or NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *f;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);
	f = malloc(sizeof(dlistint_t));
	if (f == NULL)
		return (NULL);
	f->n = n;
	f->next = NULL;
	if (*head == NULL)
	{
		f->prev = NULL;
		*head = f;
		return (f);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = f;
	f->prev = tmp;
	return (f);
}
