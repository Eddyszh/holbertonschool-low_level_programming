#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp = NULL;
	hash_node_t *new = NULL;
	unsigned long int i;

	if (!ht || !key || !value || strcmp(key, "") == 0)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];
	for (; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			if (strcmp(temp->value, value) != 0)
			{
				free(temp->value);
				temp->value = strdup(value);
			}
			return (1);
		}
	}
	new = new_node(key, value);
	if (!new)
		return (0);
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}

/**
 * new_node - creates a new node
 * @key: key to add
 * @value: value to add
 * Return: pointer to new node, NULL otherwise
 */
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!key || strcmp(key, "") == 0 || !value || !new)
		return (NULL);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}
