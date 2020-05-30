#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0, j = 0;

	if (!ht)
		return;
	printf("{");
	for (i = j; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp)
			{
				printf("%s'%s': '%s'", j == 0 ? "" : ", ",
					temp->key, temp->value), j++;
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
