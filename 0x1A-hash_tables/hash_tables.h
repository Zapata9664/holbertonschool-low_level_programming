#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct hash_noe_s - nodo
 * @key: name
 * @value: telephone
 * @next: nex node
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - HS
 * @size: Size
 * @array: Array
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);


#endif