#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_node - Creates a new node to insert
 *
 * @key: Non-empty string that is mapped to some index
 *
 * @value: Value associated with the key i.e. key:value
 *
 * Return: address of new_node (success) NULL (fail)
 */

hash_node_t *create_node(const char *key, const char *value)
{
	/* Allocate memory for the new node */
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	/* Check that memory was created for node */
	if (!new_node)
		return (NULL);

	/* Get the key */
	new_node->key = strdup(key);

	/* Check that key was copied */
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}

	/* Get the value */
	new_node->value = strdup(value);

	/* Check that value was copied */
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	/* Set next node to NULL by default */
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - Inserts an element into hash table
 *
 * @ht: Pointer to hashtable to run operations on
 *
 * @key: Non-empty string that is mapped to some index
 *
 * @value: Value associated with the key i.e. key:value
 *
 * Return: 1 (success) 0 (fail)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *lookup; /* Iterator struct */
	hash_node_t *new_node; /* New node in case key DNE */

	unsigned int idx; /* Index on table to get to node */

	char *cp_val; /* Used to hold the correlating @value */

	if (!ht || !ht->array || ht->size == 0 || !key || strlen(key) == 0 || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size); /* Get/store index */
	lookup = ht->array[idx];

	while (lookup) /* @key exists */
	{
		if (strcmp(key, lookup->key) == 0) /* match found */
		{
			cp_val = strdup(value);
			if (!cp_val)
			{
				free(lookup->value);
				return (0);
			}
			lookup->value = cp_val;
			return (1);
		}
		lookup = lookup->next;
	}

	new_node = create_node(key, value); /* @key DNE */
	if (!new_node)
		return (0);

	new_node->next = ht->array[idx]; /* add node to front */
	ht->array[idx] = new_node;
	return (1);
}
