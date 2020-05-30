#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i])
			{
				temp = ht->array[i];
				free(temp->key);
				free(temp->value);
				ht->array[i] = ht->array[i]->next;
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
