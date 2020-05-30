#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i = 0;

	if (!ht || !key)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];
	for (; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
	}
	return (NULL);
}
