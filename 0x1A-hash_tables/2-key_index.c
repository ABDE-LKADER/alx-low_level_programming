#include "hash_tables.h"

/**
 * key_index -> Gives you the index of a key.
 * @key: Hash Table Key
 * @size: Hash Table Size
 * Return: Index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
