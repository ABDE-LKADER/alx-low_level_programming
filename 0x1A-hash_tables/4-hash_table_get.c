#include "hash_tables.h"

/**
 * hash_table_get -> Retrieves a value associated with a key
 * @ht: Hash Table
 * @key: Hash Table Key
 * Return: Depend Condition
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	} return (NULL);
}
