#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Initializes hash table
 *
 * @size: size of the table
 *
 * Return: Pointer to table (success) NULL (failure)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table;

	if (size == 0)
		return (NULL);

	/* create | destroy the table */
	new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);

	new_table->size = size;

	/* create the head node | destroy the head node in each index */
	new_table->array = malloc(size * sizeof(hash_node_t *));

	if (!(new_table->array))
	{
		free(new_table);
		return (NULL);
	}

	/* initialize each array head node to NULL */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
