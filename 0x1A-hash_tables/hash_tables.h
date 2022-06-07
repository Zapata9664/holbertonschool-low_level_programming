#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct hash_node_s -  node of hs
 *
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
 * struct hash_table_s - HS strucure
 *
 * @size: Size
 * @array: Array
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
void replace_v(hash_node_t **ht, const char *key, const char *value);
int c_key(hash_node_t *ht, const char *key);
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);

#endif
