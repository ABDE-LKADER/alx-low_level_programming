#include "hash_tables.h"

/**
 * hash_table_set -> Adds an element to the hash table.
 * @ht: Hash Table
 * @key: Hash Table Key
 * @value: Hash Table Value
 * Return: Depend Condition
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL, *temp = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	} new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	} new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

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

/**
 * hash_table_print -> Prints a hash table.
 * @ht: Hash Table
 * Return: Depend Condition
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;
	char *sep = "";

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", sep, temp->key, temp->value);
			sep = ", ";
			temp = temp->next;
		}
	} printf("}\n");
}

/**
 * hash_table_print_rev -> Prints a hash table in reverse.
 * @ht: Hash Table
 * Return: Depend Condition
 */

void hash_table_print_rev(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;
	char *sep = "";

	if (ht == NULL)
		return;
	printf("{");
	for (i = ht->size - 1; i > 0; i--)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", sep, temp->key, temp->value);
			sep = ", ";
			temp = temp->next;
		}
	} printf("}\n");
}

/**
 * hash_table_delete -> Deletes a hash table.
 * @ht: Hash Table
 * Return: Depend Condition
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL, *temp2 = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			temp2 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp2;
		}
	} free(ht->array);
	free(ht);
}

/**
 * hash_table_get_sorted - Retrieves a value associated with a key
 * @ht: Hash Table
 * @key: Hash Table Key
 * Return: Depend Condition
 */

char *hash_table_get_sorted(const hash_table_t *ht, const char *key)
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

/**
 * hash_table_print_sorted -> Prints a hash table.
 * @ht: Hash Table
 * Return: Depend Condition
 */

void hash_table_print_sorted(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;
	char *sep = "";

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", sep, temp->key, temp->value);
			sep = ", ";
			temp = temp->next;
		}
	} printf("}\n");
}
