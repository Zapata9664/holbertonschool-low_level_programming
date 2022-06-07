#include "hash_tables.h"

/**
 * hash_table_create - function for create a hash table
 * @size: size
 *
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *ht;
	unsigned long int it;

	ht = malloc(sizeof(hash_table_t));

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
		return (NULL);
	for (it = 0; it < size; it++)
		ht->array[it] = NULL;

	return (ht);
}
