#include "hash_tables.h"

/**
 * hash_table_delete - Frees up all hash table memory
 *
 * @ht: Pointer to table area of table structure
 *
 * Return: none
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *next_index;

	if (!ht || !(ht->array) || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++) /* go through array */
	{
		while (ht->array[i])
		{
			next_index = ht->array[i]->next; /* sets pointer to next index */
			free(ht->array[i]->key); /* break link from array index to nodes key */
			free(ht->array[i]->value); /* break link from array index nodes value */
			free(ht->array[i]); /* free array index */
			ht->array[i] = next_index; /* resets for next index */
		}
	}
	free(ht->array); /* free the ht-pointer to the array */
	free(ht); /* free the link to the table */
}
