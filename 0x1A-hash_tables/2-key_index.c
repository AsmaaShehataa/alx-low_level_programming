#include "hash_tables.h"

/**
 * key_index - function gives the index of a key
 * @key: Input variable
 * @size: size of the array
 * Return: The index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
