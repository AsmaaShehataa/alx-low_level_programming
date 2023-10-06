#include "hash_tables.h"

/**
 * hash_table_create - function create a hash table
 * @size: input variable
 *
 * Return: Null with an error otherwise pointer to the new hash_tble
*/

hash_table_t *hash_table_create(unsigned long int size)
{
        hash_table_t *ht;
        unsigned long int i;

        ht = malloc(sizeof(hash_table_t));
        if (ht == NULL)
                return (NULL);

        ht->size = size;
        ht->array = malloc(size * sizeof(hash_node_t *));
        if (ht->array == NULL)
        {
                free(ht);
                return (NULL);
        }
        for (i = 0; i < size; i++)
                ht->array[i] = NULL;
        return (ht);
}