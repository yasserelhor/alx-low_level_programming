#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - Inserts a new node
 * at a specific index in a doubly linked list.
 * @h: Pointer to the address of the head of the doubly linked list.
 * @idx: Index at which to insert the new node.
 * @n: Integer value to be stored in the new node.
 * Return: Pointer to the newly added node, or NULL on failure.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ra2s;
	dlistint_t *f;
	unsigned int i;

	f = NULL;
	if (idx == 0)
		f = add_dnodeint(h, n);
	else
	{
		ra2s = *h;
		i = 1;
		if (ra2s != NULL)
			while (ra2s->prev != NULL)
				ra2s = ra2s->prev;
		while (ra2s != NULL)
		{
			if (i == idx)
			{
				if (ra2s->next == NULL)
					f = add_dnodeint_end(h, n);
				else
				{
					f = malloc(sizeof(dlistint_t));
					if (f != NULL)
					{
						f->n = n;
						f->next = ra2s->next;
						f->prev = ra2s;
						ra2s->next->prev = f;
						ra2s->next = f;
					}
				}
				break;
			}
			ra2s = ra2s->next;
			i++;
		}
	}

	return (f);
}
