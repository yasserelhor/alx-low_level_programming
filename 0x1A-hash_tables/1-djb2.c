#include "hash_tables.h"

/**
 * hash_djb2 - Implements the djb2 algorithm for hashing strings.
 * @str: The input string to be hashed.
 *
 * Return: The hash value generated using the djb2 algorithm.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int i;

	hash = 5381;
	while ((i = *str++))
	{
		hash = ((hash << 5) + hash) + i;
	}

	return (hash);
}
