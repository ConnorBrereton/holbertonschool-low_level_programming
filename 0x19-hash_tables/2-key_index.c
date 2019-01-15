#include "hash_tables.h"

/**
 * key_index - Finds array index through djb2 function
 *
 * @key: Input that correlates to a specific index
 *
 * @size: The size of the array of linked lists
 *
 * Return: The index of the table
 */

unsigned long int
key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
