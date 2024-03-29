#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table.
 * @size: The size of the array.
 *
 * Return:  NULL, If an error occurs .
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int ic;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (ic = 0; ic < size; ic++)
		ht->array[ic] = NULL;

	return (ht);
}
