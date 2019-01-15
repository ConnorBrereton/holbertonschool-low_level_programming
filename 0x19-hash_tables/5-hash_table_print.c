#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints all key:value pairs
 *
 * @ht: Pointer to hashtable
 *
 * Return: n/a
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, flag = 1;

	hash_node_t *cur;

	if (!ht || !(ht->array))
		return;

	printf("{");

	while (i < ht->size) /* loop through array */
	{
		cur = ht->array[i]; /* loop through each array linked list */

		while (cur)
		{
			if (flag == 0)
				printf(", ");

			printf("'%s': '%s'", cur->key, cur->value);

			flag = 0; /* reset each iteration to ensure comma-separated K:V pairs */
			cur = cur->next;
		}
		i++;
	}

	printf("}\n");
}
