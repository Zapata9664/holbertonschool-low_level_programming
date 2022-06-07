#include "hash_tables.h"

/**
 * replace_value - pre-existing key
 * @ht: double pointer to the hash_node_t list
 * @key: name
 * @value: number
 */
void replace_v(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *temp = *ht;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;

	free(temp->value);
	temp->value = strdup(value);
}

/**
 * check_key - checks if a key exists
 * @ht: pointer
 * @key: name
 *
 * Return: 1 or 0
 */
int c_key(hash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);
		ht = ht->next;
	}

	return (0);
}

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer
 * @key: name
 * @value: number
 *
 * Return: the address of the new element, or NULL if it fails
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);

	if (*head == NULL)
	{
		(*head) = new;
		new->next = NULL;
	} else
	{
		new->next = (*head);
		(*head) = new;
	}

	return (*head);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: name
 * @value: number
 *
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (c_key(ht->array[index], key))
	{
		replace_v(&ht->array[index], key, value);
		return (1);
	}
	add_node(&ht->array[index], key, value);
	if (&ht->array[index] == NULL)
		return (0);
	return (1);
}
