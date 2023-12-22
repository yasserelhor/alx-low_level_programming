#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array in the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	ha_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(ha_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
