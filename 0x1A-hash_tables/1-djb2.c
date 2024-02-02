#include "hash_tables.h"

/**
 * hash_djb2 - This is hash function implementing the djb2 algorithm.
 * @str: string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int ic;

	hash = 5381;
	while ((ic = *str++))
		hash = ((hash << 5) + hash) + ic; /* hash * 33 + ic */

	return (hash);
}
