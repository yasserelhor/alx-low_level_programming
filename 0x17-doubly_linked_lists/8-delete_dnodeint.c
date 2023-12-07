#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - Deletes a node
 * at a specific index in a doubly linked list.
 * @head: Pointer to the address of the head of the doubly linked list.
 * @index: Index of the node to be deleted.
 * Return: 1 on success, -1 on failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *rO;
	dlistint_t *la3a;
	unsigned int i;

	rO = *head;

	if (rO != NULL)
		while (rO->prev != NULL)
			rO = rO->prev;


	i = 0;


	while (rO != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = rO->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				la3a->next = rO->next;

				if (rO->next != NULL)
					rO->next->prev = la3a;
			}


			free(rO);
			return (1);

		}

		la3a = rO;
		rO = rO->next;
		i++;
	}


	return (-1);
}
