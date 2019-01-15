#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Gets the value from @key lookup
 *
 * @ht: Pointer to table struct
 *
 * @key: Key that correlates to some key:value pair
 *
 * Return: value (success) NULL (failure)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *search; /* Iterator struct */

	unsigned int idx; /* Index on table that matches key */

	/* fail cases */
	if (!ht || !(ht->array) || !(key) || strlen(key) == 0)
		return (NULL);

	/* Get and store @key index */
	idx = key_index((const unsigned char *)key, ht->size);
	search = ht->array[idx];

	/* Searches and returns key:value pair */
	while (search)
	{
		if (strcmp(key, search->key) == 0)
			return (search->value);

		search = search->next;
	}

	return (NULL);
}
