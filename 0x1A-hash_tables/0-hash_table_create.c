#include "hash_tables.h"

/**
 * hash_table_create -> Creates a hash table
 * @size: Array Size
 * Return: Hash Table Pointer
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;
	unsigned long int i = 0;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_hash_table->array[i] = NULL;
	return (new_hash_table);
}
