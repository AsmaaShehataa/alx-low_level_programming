#include "hash_tables.h"

/**
 * hash_table_set - function add or update an element in the hash table
 * @ht: A pointer to the Hash table
 * @key: the index key
 * @value: value associated with the key
 *
 * Return: 0 - Failure otherwise 1 in Success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *cpd_value;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpd_value = strdup(value);
	if (cpd_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cpd_value;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(cpd_value);
		return (0);
	}
	new->value = cpd_value;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
