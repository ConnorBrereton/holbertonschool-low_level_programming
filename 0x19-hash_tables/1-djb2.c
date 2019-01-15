#include "hash_tables.h"

/**
 * hash_djb2 - DJB2 hash function
 *
 * @str: String to be hashed
 *
 * Return: Hashed representation of string
 */

unsigned long hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
