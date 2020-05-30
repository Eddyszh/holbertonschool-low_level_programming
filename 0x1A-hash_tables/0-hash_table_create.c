#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: a pointer to the newly created hash table, NULL otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_table_t *) * size);
	if (!new->array)
		return (NULL);
	return (new);
}
