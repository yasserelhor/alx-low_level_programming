#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int jam3;

	jam3 = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			jam3 += head->n;
			head = head->next;
		}
	}

	return (jam3);
}
