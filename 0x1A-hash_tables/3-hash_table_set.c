#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key string.
 * @value: The value string.
 *
 * Return: 1 if successful, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *va;
	unsigned long int ind, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	va = strdup(value);
	if (va == NULL)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	for (i = ind; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = va;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(va);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = va;
	new->next = ht->array[ind];
	ht->array[ind] = new;

	return (1);
}
