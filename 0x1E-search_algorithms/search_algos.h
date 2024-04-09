#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - A structure representing a
 * singly linked list of integers
 * @n: The integer stored in the node
 * @index: The index of the node in the linked list
 * @next: A pointer to the next node in the linked list
 *
 * Description: Each node in the linked list
 * contains an integer value, an index,
 * and a pointer to the next node in the list.
 */

typedef struct listint_s
{
		int n;
		size_t index;
		struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Structure for a node in a skip list
 * @n: Integer value stored in the node
 * @index: Index of the node in the skip list
 * @next: Pointer to the next node in the same level
 * @express: Pointer to the next node in the express lane
 *
 * Description: Each node in the skip list contains an integer value,
 * an index, and pointers to the next node in the same level and the
 * next node in the express lane.
 */

typedef struct skiplist_s
{
				int n;
				size_t index;
				struct skiplist_s *next;
				struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
