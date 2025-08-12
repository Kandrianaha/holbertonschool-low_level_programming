#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * key_index- gives the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: the index at which the key should be store
 * in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
