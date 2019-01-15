#ifndef _HASH_H_
#define _HASH_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;


/* Creates the table */
hash_table_t *hash_table_create(unsigned long int size);

/* Hashing algorithm */
unsigned long hash_djb2(const unsigned char *str);

/* Finds key index */
unsigned long int
key_index(const unsigned char *key, unsigned long int size);

/* Creates a new node */
hash_node_t *create_node(const char *key, const char *value);

/* Inserts node at hashed index */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);





#endif
